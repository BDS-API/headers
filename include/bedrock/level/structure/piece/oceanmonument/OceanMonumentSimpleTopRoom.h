#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentSimpleTopRoom : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentSimpleTopRoom();
    virtual void getType()const;
    OceanMonumentSimpleTopRoom();
    OceanMonumentSimpleTopRoom(int &, std::shared_ptr<RoomDefinition> &);
};
