#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentDoubleYRoom();
    virtual void getType()const;
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentDoubleYRoom();
};
