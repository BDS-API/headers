#pragma once

#include "../OceanMonumentPiece.h"


class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentPenthouse();
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    OceanMonumentPenthouse(int &, BoundingBox &);
    OceanMonumentPenthouse();
};
