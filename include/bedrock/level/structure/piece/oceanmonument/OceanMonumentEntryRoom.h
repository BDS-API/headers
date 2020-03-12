#pragma once

#include "../../../../util/Random.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../definition/RoomDefinition.h"
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentEntryRoom();
    virtual void getType()const;
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentEntryRoom();
};
