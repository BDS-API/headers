#pragma once

class OceanMonumentDoubleYRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleYRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentDoubleYRoom(void);
    void OceanMonumentDoubleYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
