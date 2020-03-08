#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleXYRoom::~OceanMonumentDoubleXYRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXYRoom(void);
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
