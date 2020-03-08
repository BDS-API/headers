#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    OceanMonumentDoubleXYRoom::~OceanMonumentDoubleXYRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXYRoom(void);
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
