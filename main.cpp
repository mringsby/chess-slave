#include <iostream>
#include "Board.h"
#include "BoardVisualizer.h"

int main() {
    // Create a board with the initial position
    Board chessBoard;
    
    // Print the chessboard with the appropriate pieces
    std::cout << "Chess Board:\n";
    BoardVisualizer::printBoard(chessBoard);
    
    return 0;
}
