#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentCoreRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentCoreRoom::~OceanMonumentCoreRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentCoreRoom(void);
    OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &);
};
