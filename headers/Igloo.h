#pragma once

class Igloo : ScatteredFeaturePiece {

public:
    virtual ~Igloo();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void Igloo(int, int);
};
