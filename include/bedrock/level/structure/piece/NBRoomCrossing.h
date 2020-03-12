#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include <vector>
#include <memory>
#include "NetherFortressPiece.h"


class NBRoomCrossing : NetherFortressPiece {

public:
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~NBRoomCrossing();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    NBRoomCrossing(int, BoundingBox const&, int);
    NBRoomCrossing();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
