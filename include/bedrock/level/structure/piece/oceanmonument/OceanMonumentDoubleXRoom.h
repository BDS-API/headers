#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleXRoom : OceanMonumentPiece {

public:
    ~OceanMonumentDoubleXRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    OceanMonumentDoubleXRoom();
    OceanMonumentDoubleXRoom(int &, std::shared_ptr<RoomDefinition> &);
};
