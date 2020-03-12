#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentDoubleYRoom();
    virtual void getType()const;
    OceanMonumentDoubleYRoom();
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
