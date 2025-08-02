#include <stdio.h>

// Function prototypes
void printBoard(char board[3][3]);
int checkWin(char board[3][3], char player);
int isBoardFull(char board[3][3]);
void makeMove(char board[3][3], int row, int col, char player);

int main() {
    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    char player = 'X';
    int row, col;
    int winner = 0;

    while (1) {
        printBoard(board);
        
        // Get player move
        printf("Player %c, enter row and column (0, 1, or 2): ", player);
        scanf("%d %d", &row, &col);
        
        // Validate the move
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }
        
        // Make the move
        makeMove(board, row, col, player);
        
        // Check if the current player has won
        if (checkWin(board, player)) {
            printBoard(board);
            printf("Player %c wins!\n", player);
            winner = 1;
            break;
        }
        
        // Check if the board is full (draw)
        if (isBoardFull(board)) {
            printBoard(board);
            printf("It's a draw!\n");
            winner = 1;
            break;
        }
        
        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }
    
    return 0;
}

void printBoard(char board[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin(char board[3][3], char player) {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1;
        }
    }
    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1;
    }
    return 0;
}

int isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

void makeMove(char board[3][3], int row, int col, char player) {
    board[row][col] = player;
}
