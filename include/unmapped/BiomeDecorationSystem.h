#pragma once

#include <string>
#include <vector>


namespace BiomeDecorationSystem {

    void getHeightmapMolang(RenderParams &, std::vector<float> const&); // _ZN21BiomeDecorationSystem18getHeightmapMolangER12RenderParamsRKSt6vectorIfSaIfEE
    void getAboveTopSolidMolang(RenderParams &, std::vector<float> const&); // _ZN21BiomeDecorationSystem22getAboveTopSolidMolangER12RenderParamsRKSt6vectorIfSaIfEE
    void getIsEmptyMolang(RenderParams &, std::vector<float> const&); // _ZN21BiomeDecorationSystem16getIsEmptyMolangER12RenderParamsRKSt6vectorIfSaIfEE
    void getNoiseMolang(RenderParams &, std::vector<float> const&); // _ZN21BiomeDecorationSystem14getNoiseMolangER12RenderParamsRKSt6vectorIfSaIfEE
    void getIsExperimentalMolang(RenderParams &, std::vector<float> const&); // _ZN21BiomeDecorationSystem23getIsExperimentalMolangER12RenderParamsRKSt6vectorIfSaIfEE
    void blockSourceMolangQueries(std::string const&, bool); // _ZN21BiomeDecorationSystem24blockSourceMolangQueriesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void decorate(Biome &, LevelChunk &, BlockSource &, Random &); // _ZN21BiomeDecorationSystem8decorateER5BiomeR10LevelChunkR11BlockSourceR6Random
};
