#pragma once

class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentWingRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentWingRoom(void);
    void OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
};
