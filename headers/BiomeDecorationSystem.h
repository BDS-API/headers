#pragma once

class BiomeDecorationSystem {

public:

    void getHeightmapMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getAboveTopSolidMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getIsEmptyMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getNoiseMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void getIsExperimentalMolang(RenderParams &, std::vector<float, std::allocator<float>> const&);
    void blockSourceMolangQueries(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void decorate(Biome &, LevelChunk &, BlockSource &, Random &);
};
