#pragma once

#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"


class OceanMonumentPenthouse : OceanMonumentPiece {

public:
    virtual ~OceanMonumentPenthouse();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentPenthouse();
    OceanMonumentPenthouse(int &, BoundingBox &);
};
