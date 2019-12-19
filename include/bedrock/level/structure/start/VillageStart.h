#pragma once

class VillageStart : StructureStart {

public:
    virtual VillageStart::~VillageStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid(void)const;
    virtual void getType(void)const;

    VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
