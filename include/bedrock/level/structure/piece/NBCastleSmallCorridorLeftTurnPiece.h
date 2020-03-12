#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorLeftTurnPiece : NetherFortressPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~NBCastleSmallCorridorLeftTurnPiece();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    NBCastleSmallCorridorLeftTurnPiece(int, Random &, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleSmallCorridorLeftTurnPiece();
};
