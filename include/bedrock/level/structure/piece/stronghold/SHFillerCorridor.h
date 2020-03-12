#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHFillerCorridor : StrongholdPiece {

public:
    ~SHFillerCorridor();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    SHFillerCorridor();
    SHFillerCorridor(int, Random &, BoundingBox const&, int);
    void findPieceBox(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
};
