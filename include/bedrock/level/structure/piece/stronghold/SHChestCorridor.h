#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHChestCorridor : StrongholdPiece {

public:
    ~SHChestCorridor();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    SHChestCorridor(int, Random &, BoundingBox const&, int);
    SHChestCorridor();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
