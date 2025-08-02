#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // For _kbhit() and _getch() on Windows
#include <unistd.h> // For usleep() on Unix-like systems

#define WIDTH 20
#define HEIGHT 10
#define GRAVITY 1
#define JUMP_STRENGTH -3
#define PIPE_WIDTH 4

typedef struct {
    int x;
    int y;
} Bird;

typedef struct {
    int x;
    int height;
} Pipe;

void clearScreen() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void drawGame(Bird bird, Pipe pipe) {
    clearScreen();
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == bird.y && j == bird.x) {
                printf("B"); // Draw bird
            } else if (j == pipe.x && (i < pipe.height || i > pipe.height + 2)) {
                printf("|"); // Draw pipe
            } else if (j == WIDTH - 1) {
                printf(" "); // Space at the end of the screen
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void updateBird(Bird *bird, int *velocity) {
    if (_kbhit()) {
        char ch = _getch();
        if (ch == ' ') {
            *velocity = JUMP_STRENGTH; // Jump when space is pressed
        }
    }
    bird->y += *velocity;
    *velocity += GRAVITY;
}

void updatePipe(Pipe *pipe) {
    pipe->x--;
    if (pipe->x < 0) {
        pipe->x = WIDTH - 1;
        pipe->height = rand() % (HEIGHT - 4); // Random height for pipe
    }
}

int checkCollision(Bird bird, Pipe pipe) {
    if (bird.x == pipe.x && (bird.y < pipe.height || bird.y > pipe.height + 2)) {
        return 1; // Collision detected
    }
    if (bird.y < 0 || bird.y >= HEIGHT) {
        return 1; // Hit the ground or ceiling
    }
    return 0;
}

int main() {
    Bird bird = {WIDTH / 4, HEIGHT / 2};
    Pipe pipe = {WIDTH - 1, HEIGHT / 2};
    int velocity = 0;

    while (1) {
        drawGame(bird, pipe);
        updateBird(&bird, &velocity);
        updatePipe(&pipe);

        if (checkCollision(bird, pipe)) {
            printf("Game Over!\n");
            break;
        }

        usleep(100000); // Sleep for 100ms (or use Sleep(100) on Windows)
    }

    return 0;
}
