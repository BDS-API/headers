#pragma once

#include "../bedrock/level/biome/Biome"


class BiomeDecorationSystem {

public:

    void getHeightmapMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getAboveTopSolidMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getIsEmptyMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getNoiseMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getIsExperimentalMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void blockSourceMolangQueries(std::string const&, bool);
    void decorate(Biome &, LevelChunk &, BlockSource &, Random &);
};
