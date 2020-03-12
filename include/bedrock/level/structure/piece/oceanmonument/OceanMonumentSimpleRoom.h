#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentSimpleRoom : OceanMonumentPiece {

public:
    ~OceanMonumentSimpleRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    OceanMonumentSimpleRoom();
    OceanMonumentSimpleRoom(int &, std::shared_ptr<RoomDefinition> &, Random &);
};
