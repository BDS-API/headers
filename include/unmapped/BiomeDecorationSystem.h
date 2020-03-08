#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/level/biome/Biome"
#include "../bedrock/level/LevelChunk"


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
