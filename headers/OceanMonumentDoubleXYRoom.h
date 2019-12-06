#pragma once

class OceanMonumentDoubleXYRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentDoubleXYRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentDoubleXYRoom(void);
    void OceanMonumentDoubleXYRoom(int &, std::shared_ptr<RoomDefinition> &);
};
