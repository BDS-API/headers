#pragma once

class VillageStart : StructureStart {

public:
    virtual ~VillageStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual bool isValid(void)const;
    virtual void getType(void)const;

    void VillageStart(Dimension &, BiomeSource &, Random &, int, int);
};
