#pragma once

#include "../LevelChunk.h"
#include <string>


class WorldGenerator {

public:
    virtual ~WorldGenerator();
    virtual void debugRender();
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    void getHardcodedSpawns()const;
    WorldGenerator();
//  void getFeatureName(StructureFeatureType); //TODO: incomplete function definition
    void getFeatureId(std::string const&);
};
