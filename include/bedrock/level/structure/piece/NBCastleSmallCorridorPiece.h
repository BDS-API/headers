#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleSmallCorridorPiece(int, BoundingBox const&, int);
    NBCastleSmallCorridorPiece();
};
