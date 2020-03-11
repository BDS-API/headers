#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleYRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYRoom();
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
