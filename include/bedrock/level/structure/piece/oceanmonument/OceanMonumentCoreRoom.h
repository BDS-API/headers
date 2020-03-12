#pragma once

#include <memory>
#include "../OceanMonumentPiece.h"


class OceanMonumentCoreRoom : OceanMonumentPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentCoreRoom();
    OceanMonumentCoreRoom();
    OceanMonumentCoreRoom(int &, std::shared_ptr<RoomDefinition> &);
};
