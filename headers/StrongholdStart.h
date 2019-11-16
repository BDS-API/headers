#pragma once

class StrongholdStart : StructureStart {

    virtual ~StrongholdStart();
    virtual ~StrongholdStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
