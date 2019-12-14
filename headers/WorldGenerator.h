#pragma once

class WorldGenerator {

public:
    virtual ~WorldGenerator();
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    void getHardcodedSpawns(void)const;
    void WorldGenerator(void);
    void getFeatureName(StructureFeatureType);
    void getFeatureId(std::string const&);
};
