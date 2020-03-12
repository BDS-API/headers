#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "stronghold/SHStartPiece.h"
#include <string>
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>


class StrongholdPiece : StructurePiece {

public:
    ~StrongholdPiece();
//  void generateSmallDoor(BlockSource *, Random &, BoundingBox const&, StrongholdPiece::SmallDoorType, int, int, int); //TODO: incomplete function definition
    void generateSmallDoorChildRight(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int);
    StrongholdPiece();
    void generatePieceFromSmallDoor(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random const&, int, int, int, int, int);
    void generateSmallDoorChildForward(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int);
    void generateSmallDoorChildLeft(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int);
    void generateAndAddPiece(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    StrongholdPiece(int);
    void randomSmallDoor(Random &);
    bool isOkBox(BoundingBox const&);
    void findAndCreatePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
