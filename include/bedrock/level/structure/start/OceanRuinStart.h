#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/Dimension"
#include "../../biome/Biome"
#include "../../chunksource/OverworldGenerator"
#include "../../../../unmapped/BoundingBox"


class OceanRuinStart : StructureStart {

public:
    virtual OceanRuinStart::~OceanRuinStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    OceanRuinStart(void);
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&);
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int);
};
