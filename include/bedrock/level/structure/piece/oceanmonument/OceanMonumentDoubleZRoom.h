#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleZRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleZRoom();
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
