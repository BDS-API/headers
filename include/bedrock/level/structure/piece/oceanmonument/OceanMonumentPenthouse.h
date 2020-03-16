#pragma once

#include "../OceanMonumentPiece.h"


class OceanMonumentPenthouse : public OceanMonumentPiece {

public:
    virtual ~OceanMonumentPenthouse(); // _ZN22OceanMonumentPenthouseD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK22OceanMonumentPenthouse7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN22OceanMonumentPenthouse11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN22OceanMonumentPenthouse17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentPenthouse(); // _ZN22OceanMonumentPenthouseC2Ev
    OceanMonumentPenthouse(int &, BoundingBox &); // _ZN22OceanMonumentPenthouseC2ERiR11BoundingBox
};
