#pragma once

class PillagerOutpostStart : StructureStart {

    virtual ~PillagerOutpostStart();
    virtual ~PillagerOutpostStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
