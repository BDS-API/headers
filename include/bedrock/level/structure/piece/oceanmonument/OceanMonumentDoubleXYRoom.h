#pragma once

#include "../OceanMonumentPiece"
#include "../../../../../unmapped/BlockSource"


class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleXYRoom::~OceanMonumentDoubleXYRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleXYRoom(void);
    OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
