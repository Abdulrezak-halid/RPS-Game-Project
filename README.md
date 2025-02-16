# Rock Paper Scissors Game

A simple console-based Rock Paper Scissors game written in C++.

## Features
- Play against the computer.
- Randomized computer choices.
- Multiple game rounds (1-10 rounds per game).
- Displays round results and final game winner.
- Colored output to indicate winner.

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/your-username/rock-paper-scissors.git
   ```
2. Navigate to the project directory:
   ```sh
   cd rock-paper-scissors
   ```
3. Compile the program using g++:
   ```sh
   g++ main.cpp -o game
   ```
4. Run the game:
   ```sh
   ./game
   ```

## How to Play
1. Start the game and select the number of rounds (1-10).
2. Choose an option in each round:
   - `1` for Stone
   - `2` for Paper
   - `3` for Scissors
3. The computer will randomly select its choice.
4. The winner of each round is determined based on standard Rock-Paper-Scissors rules.
5. The game ends after the selected number of rounds, and the final winner is displayed.

## Example Gameplay
```
How Many Rounds 1 to 10 ?
3

Round [1] begins:
Your Choice: [1]: Stone, [2]: Paper, [3]: Scissors ? 2
Player1 Choice: Paper
Computer Choice: Stone
Round Winner: [Player1]

Round [2] begins:
Your Choice: [1]: Stone, [2]: Paper, [3]: Scissors ? 3
Player1 Choice: Scissors
Computer Choice: Scissors
Round Winner: [No Winner]

Round [3] begins:
Your Choice: [1]: Stone, [2]: Paper, [3]: Scissors ? 1
Player1 Choice: Stone
Computer Choice: Scissors
Round Winner: [Player1]

+++ Game Over +++
Final Winner: Player1
```

## Dependencies
- C++ compiler (GCC, Clang, or MSVC)

## Contributing
1. Fork the repository.
2. Create a new branch.
3. Make your changes.
4. Submit a pull request.

## License
This project is licensed under the MIT License.
