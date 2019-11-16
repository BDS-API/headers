#pragma once

class WoodlandMansionStart : StructureStart {

    virtual void ~WoodlandMansionStart();
    virtual void ~WoodlandMansionStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
