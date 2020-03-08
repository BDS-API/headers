#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleZRoom::~OceanMonumentDoubleZRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleZRoom(void);
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
