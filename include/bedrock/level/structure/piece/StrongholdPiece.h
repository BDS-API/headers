#pragma once

#include "stronghold/SHStartPiece.h"
#include <memory>
#include "../../../util/Random.h"
#include "./StructurePiece.h"
#include "../../../block/unmapped/BlockSource.h"
#include <vector>
#include "../../../../unmapped/BoundingBox.h"
#include <string>


class StrongholdPiece : StructurePiece {

public:
    virtual ~StrongholdPiece();

    void findAndCreatePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void generatePieceFromSmallDoor(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random const&, int, int, int, int, int);
    void generateAndAddPiece(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
//  void generateSmallDoor(BlockSource *, Random &, BoundingBox const&, StrongholdPiece::SmallDoorType, int, int, int); //TODO: incomplete function definition
    void generateSmallDoorChildForward(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int);
    void generateSmallDoorChildLeft(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int);
    void generateSmallDoorChildRight(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int);
    void randomSmallDoor(Random &);
    StrongholdPiece();
    StrongholdPiece(int);
    bool isOkBox(BoundingBox const&);
};
