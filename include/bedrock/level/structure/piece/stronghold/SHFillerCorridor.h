#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"
#include "../StructurePiece.h"
#include <vector>


class SHFillerCorridor : StrongholdPiece {

public:
    virtual ~SHFillerCorridor();
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void findPieceBox(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int);
    SHFillerCorridor();
    SHFillerCorridor(int, Random &, BoundingBox const&, int);
};
