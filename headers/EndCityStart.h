#pragma once

class EndCityStart : StructureStart {

    virtual void ~EndCityStart();
    virtual void ~EndCityStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
