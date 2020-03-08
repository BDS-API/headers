#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYRoom(void);
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
