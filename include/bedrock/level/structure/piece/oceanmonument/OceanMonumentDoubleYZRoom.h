#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleYZRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYZRoom();
    OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
