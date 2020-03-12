#pragma once

#include "../LevelChunk.h"
#include <string>


class WorldGenerator {

public:
    virtual void debugRender();
    ~WorldGenerator();
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    WorldGenerator();
//  void getFeatureName(StructureFeatureType); //TODO: incomplete function definition
    void getFeatureId(std::string const&);
    void getHardcodedSpawns()const;
};
