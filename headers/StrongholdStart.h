#pragma once

class StrongholdStart : StructureStart {

    virtual void ~StrongholdStart();
    virtual void ~StrongholdStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
