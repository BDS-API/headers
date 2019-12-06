#pragma once

class ScatteredFeatureStart : StructureStart {

public:
    virtual ~ScatteredFeatureStart();
    virtual void getType(void)const;

    void ScatteredFeatureStart(void);
    void ScatteredFeatureStart(int, int);
    void ScatteredFeatureStart(BiomeSource &, int, int);
};
