#pragma once

class WoodlandMansionStart : StructureStart {

    virtual ~WoodlandMansionStart();
    virtual ~WoodlandMansionStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
