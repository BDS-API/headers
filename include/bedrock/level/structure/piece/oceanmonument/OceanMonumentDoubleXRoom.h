#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleXRoom::~OceanMonumentDoubleXRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXRoom(void);
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
