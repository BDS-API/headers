#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    OceanMonumentDoubleZRoom::~OceanMonumentDoubleZRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleZRoom(void);
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
