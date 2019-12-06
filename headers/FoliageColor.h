#pragma once

class FoliageColor {

public:
    static long FoliageColor::GRASS_TOP_LEFT;
    static long FoliageColor::GRASS_TOP_RIGHT;
    static long FoliageColor::GRASS_BOTTOM_LEFT;
    static long FoliageColor::GRASS_BOTTOM_RIGHT;
    static long FoliageColor::FOLIAGE_TOP_LEFT;
    static long FoliageColor::FOLIAGE_TOP_RIGHT;
    static long FoliageColor::FOLIAGE_BOTTOM_LEFT;
    static long FoliageColor::FOLIAGE_BOTTOM_RIGHT;


    void _index(float, float);
    void _getX(float, float);
    void _getY(float, float);
    void getGrassColor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, float);
    void getGrassColor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float);
    void getFoliageColor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, float);
    void getMapGrassColor(float, float);
    void getMapFoliageColor(float, float);
    void getGrassColor(float, float);
    void getFoliageColor(float, float);
    void getEvergreenColor(float, float);
    void getMapEvergreenColor(float, float);
    void getBirchColor(float, float);
    void getMapBirchColor(float, float);
    void getDefaultColor(void);
    void _toRGB(int);
    void calculateMapGrassColorHelper(BlockSource &, BlockPos const&, BlockPos const&, int &, int &, int &);
    void getGrassColor(BlockSource &, BlockPos const&);
    void getMapGrassColor(BlockSource &, BlockPos const&);
    void _setPalette(mce::Image &, std::array<int, 65536ul> &);
    void setGrassColorPalette(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, mce::Image &);
    void setFoliageColorPalette(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, mce::Image &);
    void buildGrassColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getGrassNoise(void);
};
