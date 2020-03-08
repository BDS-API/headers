#pragma once

#include "../StrongholdPiece"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"


class SHFiveCrossing : StrongholdPiece {

public:
    SHFiveCrossing::~SHFiveCrossing()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHFiveCrossing(void);
    SHFiveCrossing(int, Random &, BoundingBox const&, int);
};
