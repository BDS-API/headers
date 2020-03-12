#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorRightTurnPiece : NetherFortressPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~NBCastleSmallCorridorRightTurnPiece();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    NBCastleSmallCorridorRightTurnPiece(int, Random &, BoundingBox const&, int);
    NBCastleSmallCorridorRightTurnPiece();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
