#include "BoardVisualizer.h"

void BoardVisualizer::printBoard(const Board& board) {
    printBitboardWithPieces(
        board.getWhitePawns(), board.getWhiteRooks(), board.getWhiteKnights(),
        board.getWhiteBishops(), board.getWhiteQueens(), board.getWhiteKing(),
        board.getBlackPawns(), board.getBlackRooks(), board.getBlackKnights(),
        board.getBlackBishops(), board.getBlackQueens(), board.getBlackKing()
    );
}

void BoardVisualizer::printBitboardWithPieces(
    uint64_t wPawn, uint64_t wRook, uint64_t wKnight, uint64_t wBishop,
    uint64_t wQueen, uint64_t wKing, uint64_t bPawn, uint64_t bRook,
    uint64_t bKnight, uint64_t bBishop, uint64_t bQueen, uint64_t bKing
) {
    // Loop through each rank (8 ranks)
    for (int rank = 7; rank >= 0; rank--) {  // From rank 7 (top) to 0 (bottom)
        // Loop through each file (8 files)
        for (int file = 0; file < 8; file++) {  // From file 0 (a) to 7 (h)
            int square = rank * 8 + file;  // Calculate the bit index (0 to 63)

            // Check which piece is present at the current square
            if ((wPawn >> square) & 1) {
                std::cout << "wP ";  // Pawn
            } else if ((wRook >> square) & 1) {
                std::cout << "wR ";  // Rook
            } else if ((wKnight >> square) & 1) {
                std::cout << "wN ";  // Knight
            } else if ((wBishop >> square) & 1) {
                std::cout << "wB ";  // Bishop
            } else if ((wQueen >> square) & 1) {
                std::cout << "wQ ";  // Queen
            } else if ((wKing >> square) & 1) {
                std::cout << "wK ";  // King
            } else if ((bPawn >> square) & 1) {
                std::cout << "bP ";  // Pawn
            } else if ((bRook >> square) & 1) {
                std::cout << "bR ";  // Rook
            } else if ((bKnight >> square) & 1) {
                std::cout << "bN ";  // Knight
            } else if ((bBishop >> square) & 1) {
                std::cout << "bB ";  // Bishop
            } else if ((bQueen >> square) & 1) {
                std::cout << "bQ ";  // Queen
            } else if ((bKing >> square) & 1) {
                std::cout << "bK ";  // King
            } else {
                std::cout << " . ";  // Empty square
            }
        }
        std::cout << "\n";  // Move to the next rank
    }
}
