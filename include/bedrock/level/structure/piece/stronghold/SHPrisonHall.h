#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHPrisonHall : StrongholdPiece {

public:
    ~SHPrisonHall();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    SHPrisonHall();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHPrisonHall(int, Random &, BoundingBox const&, int);
};
