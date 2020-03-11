#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentSimpleRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentSimpleRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleRoom();
    OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &);
};
