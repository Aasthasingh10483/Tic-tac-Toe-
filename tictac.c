#include <stdio.h>

// Global board variable
char board[3][3];

// Function to initialize the board with numbers 1-9
void initializeBoard() { // Removed space between function name and parentheses
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = count + '0'; // Store as characters '1' to '9'
            count++;
        }
    }
}

// Function to display the board
void displayBoard() { // Removed space between function name and parentheses
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|"); // Vertical lines
        }
        if (i < 2) printf("\n---|---|---\n"); // Horizontal lines
    }
    printf("\n");
}

// Function to check for a win
int checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1;
    return 0;
}

// Function to check if the game is a draw
int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0;
        }
    }
    return 1;
}

// Function to take player's input
void playerMove(char player) {
    int choice;
    int row, col;
    printf("Player %c, enter a number (1-9): ", player);
    scanf("%d", &choice);

    // Convert choice to row and column
    row = (choice - 1) / 3;
    col = (choice - 1) % 3;

    // Check if the chosen cell is empty
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = player; // Place the player's marker
    } else {
        printf("Invalid move! Try again.\n");
        playerMove(player); // Recursion for invalid input
    }
}

int main() {
    char currentPlayer = 'X'; // Player 1 starts with 'X'
    int gameStatus = 0; // 0: ongoing, 1: win, -1: draw
    initializeBoard(); // Setup initial board

    // Main game loop
    while (1) {
        displayBoard(); // Show current board
        playerMove(currentPlayer); // Get player's move

        // Check if there's a winner
        if (checkWin()) {
            displayBoard(); // Display final state of the board
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        // Check for a draw
        if (checkDraw()) {
            displayBoard(); // Display final state of the board
            printf("It's a draw!\n");
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}
