#pragma once

#include <vector>
#include <string>
#include "StructurePiece.h"


class StrongholdPiece : StructurePiece {

public:
    ~StrongholdPiece();
    void generatePieceFromSmallDoor(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random const&, int, int, int, int, int);
    void generateSmallDoorChildForward(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int);
//  void generateSmallDoor(BlockSource *, Random &, BoundingBox const&, StrongholdPiece::SmallDoorType, int, int, int); //TODO: incomplete function definition
    StrongholdPiece();
    StrongholdPiece(int);
    void randomSmallDoor(Random &);
    void findAndCreatePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    void generateAndAddPiece(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    void generateSmallDoorChildLeft(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int);
    void generateSmallDoorChildRight(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int);
    bool isOkBox(BoundingBox const&);
};
