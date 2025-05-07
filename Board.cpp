#include "Board.h"
#include "BitboardDefinitions.h"

Board::Board() {
    // Initialize with starting position
    wPawn = W_PAWN_START;
    wRook = W_ROOK_START;
    wKnight = W_KNIGHT_START;
    wBishop = W_BISHOP_START;
    wQueen = W_QUEEN_START;
    wKing = W_KING_START;

    bPawn = B_PAWN_START;
    bRook = B_ROOK_START;
    bKnight = B_KNIGHT_START;
    bBishop = B_BISHOP_START;
    bQueen = B_QUEEN_START;
    bKing = B_KING_START;
    
    updateCombinedBitboards();
}

void Board::updateCombinedBitboards() {
    wPieces = wPawn | wRook | wKnight | wBishop | wQueen | wKing;
    bPieces = bPawn | bRook | bKnight | bBishop | bQueen | bKing;
}
