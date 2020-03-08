#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../definition/RoomDefinition"


class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentEntryRoom::~OceanMonumentEntryRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentEntryRoom(void);
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
};
