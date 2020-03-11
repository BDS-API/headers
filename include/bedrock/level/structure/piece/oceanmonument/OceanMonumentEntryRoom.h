#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../block/unmapped/BlockSource.h"


class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentEntryRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentEntryRoom();
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
};
