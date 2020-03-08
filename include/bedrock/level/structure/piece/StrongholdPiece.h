#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "stronghold/SHStartPiece"
#include "../../../../unmapped/BoundingBox"


class StrongholdPiece : StructurePiece {

public:
    virtual StrongholdPiece::~StrongholdPiece()

    void findAndCreatePieceFactory(std::string const&, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void generatePieceFromSmallDoor(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random const&, int, int, int, int, int);
    void generateAndAddPiece(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    void generateSmallDoor(BlockSource *, Random &, BoundingBox const&, StrongholdPiece::SmallDoorType, int, int, int);
    void generateSmallDoorChildForward(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int);
    void generateSmallDoorChildLeft(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int);
    void generateSmallDoorChildRight(SHStartPiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int);
    void randomSmallDoor(Random &);
    StrongholdPiece(void);
    StrongholdPiece(int);
    bool isOkBox(BoundingBox const&);
};
