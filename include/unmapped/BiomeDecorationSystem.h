#pragma once

#include <string>
#include "RenderParams.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/level/LevelChunk.h"
#include <vector>
#include "../bedrock/util/Random.h"
#include "../bedrock/level/biome/Biome.h"


namespace BiomeDecorationSystem {

    void blockSourceMolangQueries(std::string const&, bool);
    void getIsExperimentalMolang(RenderParams &, std::vector<float> const&);
    void decorate(Biome &, LevelChunk &, BlockSource &, Random &);
    void getIsEmptyMolang(RenderParams &, std::vector<float> const&);
    void getNoiseMolang(RenderParams &, std::vector<float> const&);
    void getHeightmapMolang(RenderParams &, std::vector<float> const&);
    void getAboveTopSolidMolang(RenderParams &, std::vector<float> const&);
};
