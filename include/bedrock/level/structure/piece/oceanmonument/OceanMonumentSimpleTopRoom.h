#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentSimpleTopRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleTopRoom();
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
};
