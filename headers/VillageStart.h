#pragma once

class VillageStart : StructureStart {

    virtual void ~VillageStart();
    virtual void ~VillageStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
