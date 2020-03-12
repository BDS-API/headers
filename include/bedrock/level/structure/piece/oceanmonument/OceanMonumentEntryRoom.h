#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentEntryRoom : OceanMonumentPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentEntryRoom();
    OceanMonumentEntryRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentEntryRoom();
};
