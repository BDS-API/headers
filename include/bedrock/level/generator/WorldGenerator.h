#pragma once

#include <string>


class WorldGenerator {

public:
    virtual void addHardcodedSpawnAreas(LevelChunk &);
    virtual void debugRender();
    ~WorldGenerator();
//  void getFeatureName(StructureFeatureType); //TODO: incomplete function definition
    void getFeatureId(std::string const&);
    void getHardcodedSpawns()const;
    WorldGenerator();
};
