#pragma once

class WorldGenerator {

public:
    virtual ~WorldGenerator();
    virtual void debugRender(void);
    virtual void addHardcodedSpawnAreas(LevelChunk &);

    void getHardcodedSpawns(void)const;
    void WorldGenerator(void);
    void getFeatureName(StructureFeatureType);
    void getFeatureId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
