#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleYZRoom : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentDoubleYZRoom();
    virtual void getType()const;
    OceanMonumentDoubleYZRoom();
    OceanMonumentDoubleYZRoom(int &, std::shared_ptr<RoomDefinition> &);
};
