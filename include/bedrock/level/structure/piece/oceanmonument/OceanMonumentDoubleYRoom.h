#pragma once

#include "../OceanMonumentPiece"
#include "../../../../../unmapped/BlockSource"


class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYRoom(void);
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
