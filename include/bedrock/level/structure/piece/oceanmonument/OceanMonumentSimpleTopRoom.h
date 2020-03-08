#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    OceanMonumentSimpleTopRoom::~OceanMonumentSimpleTopRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleTopRoom(void);
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
};
