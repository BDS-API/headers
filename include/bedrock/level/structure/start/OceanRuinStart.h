#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../chunksource/OverworldGenerator.h"
#include "../../biome/Biome.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "StructureStart.h"


class OceanRuinStart : StructureStart {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~OceanRuinStart();
    OceanRuinStart();
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&);
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int);
};
