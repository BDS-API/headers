#pragma once

#include "../../../../util/Random"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"
#include "../../../../../unmapped/BoundingBox"
#include "../StrongholdPiece"


class SHFillerCorridor : StrongholdPiece {

public:
    virtual SHFillerCorridor::~SHFillerCorridor()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void findPieceBox(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int);
    SHFillerCorridor(void);
    SHFillerCorridor(int, Random &, BoundingBox const&, int);
};
