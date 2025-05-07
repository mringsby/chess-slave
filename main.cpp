#include <iostream>
#include <cstdint>


// Definition of start position for bitboards
#define W_PAWN_START   0b0000000000000000000000000000000000000000000000001111111100000000ULL
#define W_ROOK_START   0b0000000000000000000000000000000000000000000000000000000010000001ULL
#define W_KNIGHT_START 0b0000000000000000000000000000000000000000000000000000000001000010ULL
#define W_BISHOP_START 0b0000000000000000000000000000000000000000000000000000000000100100ULL
#define W_QUEEN_START  0b0000000000000000000000000000000000000000000000000000000000001000ULL
#define W_KING_START   0b0000000000000000000000000000000000000000000000000000000000010000ULL
#define B_PAWN_START   0b0000000011111111000000000000000000000000000000000000000000000000ULL
#define B_ROOK_START   0b1000000100000000000000000000000000000000000000000000000000000000ULL
#define B_KNIGHT_START 0b0100001000000000000000000000000000000000000000000000000000000000ULL
#define B_BISHOP_START 0b0010010000000000000000000000000000000000000000000000000000000000ULL
#define B_QUEEN_START  0b0001000000000000000000000000000000000000000000000000000000000000ULL
#define B_KING_START   0b0000100000000000000000000000000000000000000000000000000000000000ULL

// Function to print the board with piece names
void printBitboardWithPieces(uint64_t wPawn, uint64_t wRook, uint64_t wKnight, uint64_t wBishop, uint64_t wQueen, uint64_t wKing, uint64_t bPawn, uint64_t bRook, uint64_t bKnight, uint64_t bBishop, uint64_t bQueen, uint64_t bKing) {
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

// Main function to display the board
int main() {

    uint64_t wPawn = W_PAWN_START;
    uint64_t wRook = W_ROOK_START;
    uint64_t wKnight = W_KNIGHT_START;
    uint64_t wBishop = W_BISHOP_START;
    uint64_t wQueen = W_QUEEN_START;
    uint64_t wKing = W_KING_START;
    uint64_t bPawn = B_PAWN_START;
    uint64_t bRook = B_ROOK_START;
    uint64_t bKnight = B_KNIGHT_START;
    uint64_t bBishop = B_BISHOP_START;
    uint64_t bQueen = B_QUEEN_START;
    uint64_t bKing = B_KING_START;

    // Print the chessboard with the appropriate pieces
    std::cout << "White Pieces:\n";
    printBitboardWithPieces(wPawn, wRook, wKnight, wBishop, wQueen, wKing, bPawn, bRook, bKnight, bBishop, bQueen, bKing);

    return 0;
}