#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleXRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXRoom();
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
