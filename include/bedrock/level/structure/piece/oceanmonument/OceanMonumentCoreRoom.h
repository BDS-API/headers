#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentCoreRoom : OceanMonumentPiece {

public:
    OceanMonumentCoreRoom::~OceanMonumentCoreRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentCoreRoom(void);
    OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &);
};
