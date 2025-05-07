#pragma once
#include <cstdint>
#include "BitboardDefinitions.h"

class Board {
public:
    Board(); // Constructor that sets up the initial position
    
    // Getters for piece bitboards
    uint64_t getWhitePawns() const { return wPawn; }
    uint64_t getWhiteRooks() const { return wRook; }
    uint64_t getWhiteKnights() const { return wKnight; }
    uint64_t getWhiteBishops() const { return wBishop; }
    uint64_t getWhiteQueens() const { return wQueen; }
    uint64_t getWhiteKing() const { return wKing; }
    uint64_t getBlackPawns() const { return bPawn; }
    uint64_t getBlackRooks() const { return bRook; }
    uint64_t getBlackKnights() const { return bKnight; }
    uint64_t getBlackBishops() const { return bBishop; }
    uint64_t getBlackQueens() const { return bQueen; }
    uint64_t getBlackKing() const { return bKing; }
    
    // Get combined pieces
    uint64_t getWhitePieces() const { return wPieces; }
    uint64_t getBlackPieces() const { return bPieces; }
    uint64_t getAllPieces() const { return wPieces | bPieces; }

private:
    // Bitboards for each piece type
    uint64_t wPawn, wRook, wKnight, wBishop, wQueen, wKing;
    uint64_t bPawn, bRook, bKnight, bBishop, bQueen, bKing;
    
    // Combined bitboards
    uint64_t wPieces; // All white pieces
    uint64_t bPieces; // All black pieces
    
    // Helper to update the combined bitboards
    void updateCombinedBitboards();
};
