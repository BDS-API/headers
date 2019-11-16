#pragma once

class ScatteredFeatureStart : StructureStart {

    virtual ~ScatteredFeatureStart();
    virtual ~ScatteredFeatureStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void isValid(void)const;
    virtual void getType(void)const;
}
