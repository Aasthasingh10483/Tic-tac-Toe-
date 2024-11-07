
# Tic-Tac-Toe Game in C

This repository contains a simple command-line Tic-Tac-Toe game implemented in C. The game allows two players to play Tic-Tac-Toe, taking turns on a 3x3 grid.

## Features

- **Two-player mode**: Both players can enter their moves via the command line.
- **Interactive gameplay**: Players are prompted to enter their moves in real time.
- **Simple UI**: Displays the board in the terminal after each turn.
- **Win/Tie detection**: Automatically checks for winning conditions or a tie.

## Getting Started

### Prerequisites

- A C compiler, such as GCC

### Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/tictac.git
   cd tictac
   ```

2. Compile the code:
   ```bash
   gcc tictac.c -o tictac
   ```

3. Run the game:
   ```bash
   ./tictac
   ```

## How to Play

- The game is played on a 3x3 grid.
- Players take turns to enter their moves by choosing a cell number (1-9).
- The first player to align three of their symbols (either horizontally, vertically, or diagonally) wins.
- If all cells are filled without a winner, the game ends in a tie.

## Example Gameplay

```plaintext
Player 1 (X) - Enter a number between 1-9: 5
 X |   |  
-----------
   | X |  
-----------
   |   |  

Player 2 (O) - Enter a number between 1-9: 1
 O |   |  
-----------
   | X |  
-----------
   |   |  
```

## Code Structure

- **tictac.c**: Contains the complete logic and structure for the game, including functions for:
  - Displaying the board
  - Taking player input
  - Checking win conditions


