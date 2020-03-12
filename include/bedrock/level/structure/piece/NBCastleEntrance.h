#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBCastleEntrance : NetherFortressPiece {

public:
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    ~NBCastleEntrance();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    NBCastleEntrance();
    NBCastleEntrance(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
