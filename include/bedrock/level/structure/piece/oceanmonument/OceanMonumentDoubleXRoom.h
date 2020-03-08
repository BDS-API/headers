#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    OceanMonumentDoubleXRoom::~OceanMonumentDoubleXRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXRoom(void);
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
