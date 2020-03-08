#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleYZRoom::~OceanMonumentDoubleYZRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYZRoom(void);
    OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
