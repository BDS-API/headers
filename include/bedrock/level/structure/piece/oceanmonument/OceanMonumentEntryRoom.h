#pragma once

#include "../../../../definition/RoomDefinition"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    OceanMonumentEntryRoom::~OceanMonumentEntryRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentEntryRoom(void);
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
};
