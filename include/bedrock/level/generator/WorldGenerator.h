#pragma once

#include "../LevelChunk"


class WorldGenerator {

public:
    virtual WorldGenerator::~WorldGenerator();
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    void getHardcodedSpawns(void)const;
    WorldGenerator(void);
    void getFeatureName(StructureFeatureType);
    void getFeatureId(std::string const&);
};
