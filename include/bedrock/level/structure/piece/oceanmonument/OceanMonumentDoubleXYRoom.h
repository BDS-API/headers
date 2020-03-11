#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleXYRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXYRoom();
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
