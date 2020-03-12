#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    virtual void getType()const;
    ~OceanMonumentDoubleXRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    OceanMonumentDoubleXRoom();
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
