#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    ~OceanMonumentDoubleZRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentDoubleZRoom();
};
