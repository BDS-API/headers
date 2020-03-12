#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHLeftTurn : StrongholdPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~SHLeftTurn();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    SHLeftTurn(int, Random &, BoundingBox const&, int);
    SHLeftTurn();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
