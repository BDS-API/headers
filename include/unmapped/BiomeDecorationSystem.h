#pragma once

#include <string>
#include <vector>


namespace BiomeDecorationSystem {

    void getIsEmptyMolang(RenderParams &, std::vector<float> const&);
    void getAboveTopSolidMolang(RenderParams &, std::vector<float> const&);
    void getIsExperimentalMolang(RenderParams &, std::vector<float> const&);
    void getNoiseMolang(RenderParams &, std::vector<float> const&);
    void getHeightmapMolang(RenderParams &, std::vector<float> const&);
    void blockSourceMolangQueries(std::string const&, bool);
    void decorate(Biome &, LevelChunk &, BlockSource &, Random &);
};
