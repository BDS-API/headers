#pragma once

class OceanRuinStart : StructureStart {

public:
    virtual OceanRuinStart::~OceanRuinStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType(void)const;

    OceanRuinStart(void);
    OceanRuinStart(Dimension &, OverworldGenerator &, Random &, int, int, Biome const&);
    void createRuin(Dimension &, OverworldGenerator &, Random &, int, int);
};
