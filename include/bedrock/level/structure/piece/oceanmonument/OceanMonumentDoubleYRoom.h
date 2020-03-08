#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYRoom(void);
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
