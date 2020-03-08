#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentSimpleRoom : OceanMonumentPiece {

public:
    OceanMonumentSimpleRoom::~OceanMonumentSimpleRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleRoom(void);
    OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &);
};
