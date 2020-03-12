#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBCastleStalkRoom : NetherFortressPiece {

public:
    virtual void getType()const;
    ~NBCastleStalkRoom();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    NBCastleStalkRoom(int, BoundingBox const&, int);
    NBCastleStalkRoom();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
