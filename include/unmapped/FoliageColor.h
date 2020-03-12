#pragma once

#include <string>
#include <array>


namespace FoliageColor {

    static long GRASS_TOP_LEFT;
    static long GRASS_TOP_RIGHT;
    static long GRASS_BOTTOM_LEFT;
    static long GRASS_BOTTOM_RIGHT;
    static long FOLIAGE_TOP_LEFT;
    static long FOLIAGE_TOP_RIGHT;
    static long FOLIAGE_BOTTOM_LEFT;
    static long FOLIAGE_BOTTOM_RIGHT;
    static std::string mGrassPalettes;
    static std::string mFoliagePalettes;

    void getBirchColor(float, float);
    void getGrassColor(float, float);
    void getMapBirchColor(float, float);
    void getGrassColor(std::string const&, float);
    void getFoliageColor(float, float);
    void _index(float, float);
    void getEvergreenColor(float, float);
    void getMapFoliageColor(float, float);
    void getMapGrassColor(BlockSource &, BlockPos const&);
    void getFoliageColor(std::string const&, float, float);
    void calculateMapGrassColorHelper(BlockSource &, BlockPos const&, BlockPos const&, int &, int &, int &);
    void _getY(float, float);
    void getMapGrassColor(float, float);
    void getGrassColor(BlockSource &, BlockPos const&);
    void _getX(float, float);
    void setFoliageColorPalette(std::string const&, mce::Image &);
    void getGrassColor(std::string const&, float, float);
    void buildGrassColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void _toRGB(int);
    void _setPalette(mce::Image const&, std::array<int, 65536ul> &);
    void getGrassNoise();
    void setGrassColorPalette(std::string const&, mce::Image &);
    void getDefaultColor();
    void getMapEvergreenColor(float, float);
};
