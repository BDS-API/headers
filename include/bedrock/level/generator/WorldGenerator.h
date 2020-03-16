#pragma once

#include <string>


class WorldGenerator {

public:
    virtual ~WorldGenerator(); // _ZN14WorldGeneratorD2Ev
    virtual void __fake_function0(); // fake
    virtual void debugRender(); // _ZN14WorldGenerator11debugRenderEv
    virtual void addHardcodedSpawnAreas(LevelChunk &); // _ZN14WorldGenerator22addHardcodedSpawnAreasER10LevelChunk
    void getHardcodedSpawns()const; // _ZNK14WorldGenerator18getHardcodedSpawnsEv
    WorldGenerator(); // _ZN14WorldGeneratorC2Ev
//    void getFeatureName(long); //TODO: incomplete function definition // _ZN14WorldGenerator14getFeatureNameE20StructureFeatureType
    void getFeatureId(std::string const&); // _ZN14WorldGenerator12getFeatureIdERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
