#pragma once

#include "../LevelChunk"


class WorldGenerator {

public:
    virtual WorldGenerator::~WorldGenerator()
    virtual void debugRender();
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    void getHardcodedSpawns()const;
    WorldGenerator(void);
    void getFeatureName(StructureFeatureType);
    void getFeatureId(std::string const&);
};
