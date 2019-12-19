#pragma once

class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentDoubleYRoom::~OceanMonumentDoubleYRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentDoubleYRoom(void);
    OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
