#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentSimpleTopRoom::~OceanMonumentSimpleTopRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentSimpleTopRoom(void);
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
};
