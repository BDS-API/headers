#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentCoreRoom : OceanMonumentPiece {

public:
    ~OceanMonumentCoreRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentCoreRoom();
};
