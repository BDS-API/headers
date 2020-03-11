#pragma once

#include "../../chunksource/OverworldGenerator.h"
#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../biome/Biome.h"
#include "../../../../unmapped/BoundingBox.h"


class OceanRuinStart : StructureStart {

public:
    virtual ~OceanRuinStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    OceanRuinStart();
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&);
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int);
};
