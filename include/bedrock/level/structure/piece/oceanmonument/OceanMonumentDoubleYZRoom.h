#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYZRoom(void);
    OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
