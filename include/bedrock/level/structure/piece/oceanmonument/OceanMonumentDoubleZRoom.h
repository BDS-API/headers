#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleZRoom : OceanMonumentPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentDoubleZRoom();
    OceanMonumentDoubleZRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentDoubleZRoom();
};
