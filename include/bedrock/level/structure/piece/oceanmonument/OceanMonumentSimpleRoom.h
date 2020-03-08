#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentSimpleRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentSimpleRoom::~OceanMonumentSimpleRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleRoom(void);
    OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &);
};
