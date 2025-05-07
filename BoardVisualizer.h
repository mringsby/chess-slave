#pragma once
#include <iostream>
#include <cstdint>
#include "Board.h"

class BoardVisualizer {
public:
    // Print the board with piece names
    static void printBoard(const Board& board);
    
private:
    // Helper function to print the board with piece bitboards
    static void printBitboardWithPieces(
        uint64_t wPawn, uint64_t wRook, uint64_t wKnight, uint64_t wBishop, 
        uint64_t wQueen, uint64_t wKing, uint64_t bPawn, uint64_t bRook, 
        uint64_t bKnight, uint64_t bBishop, uint64_t bQueen, uint64_t bKing
    );
};
