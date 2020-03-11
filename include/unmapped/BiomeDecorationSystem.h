#pragma once

#include "../bedrock/util/Random.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include <vector>
#include "../bedrock/level/LevelChunk.h"
#include "./RenderParams.h"
#include "../bedrock/level/biome/Biome.h"
#include <string>


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
