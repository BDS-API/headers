#pragma once

class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    virtual OceanMonumentPenthouse::~OceanMonumentPenthouse();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentPenthouse(void);
    OceanMonumentPenthouse(int &, BoundingBox &);
};
