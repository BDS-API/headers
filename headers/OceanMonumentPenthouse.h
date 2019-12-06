#pragma once

class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    virtual ~OceanMonumentPenthouse();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void OceanMonumentPenthouse(void);
    void OceanMonumentPenthouse(int &, BoundingBox &);
};
