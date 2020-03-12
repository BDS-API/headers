#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    ~OceanMonumentDoubleXYRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    OceanMonumentDoubleXYRoom();
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
