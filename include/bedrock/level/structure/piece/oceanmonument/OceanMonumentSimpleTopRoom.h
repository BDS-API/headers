#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    ~OceanMonumentSimpleTopRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentSimpleTopRoom();
};
