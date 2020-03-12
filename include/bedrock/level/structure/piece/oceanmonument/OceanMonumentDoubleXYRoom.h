#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentDoubleXYRoom();
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
    OceanMonumentDoubleXYRoom();
};
