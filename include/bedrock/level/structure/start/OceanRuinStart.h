#pragma once

#include "../../biome/Biome"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../block/unmapped/BlockSource"
#include "../../chunksource/OverworldGenerator"


class OceanRuinStart : StructureStart {

public:
    OceanRuinStart::~OceanRuinStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    OceanRuinStart(void);
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&);
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int);
};
