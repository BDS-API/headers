#pragma once

#include <string>
#include "../mce/Image.h"
#include "../bedrock/util/BlockPos.h"
#include <array>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/Random.h"


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

    void _getY(float, float);
    void buildGrassColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getMapBirchColor(float, float);
    void getGrassColor(std::string const&, float);
    void getFoliageColor(std::string const&, float, float);
    void getMapGrassColor(float, float);
//  void _setPalette(mce::Image const&, std::array<int, 65536ul> &); //TODO: incomplete function definition
    void _toRGB(int);
    void getDefaultColor();
    void getGrassNoise();
    void setGrassColorPalette(std::string const&, mce::Image &);
    void getGrassColor(std::string const&, float, float);
    void calculateMapGrassColorHelper(BlockSource &, BlockPos const&, BlockPos const&, int &, int &, int &);
    void _index(float, float);
    void getMapGrassColor(BlockSource &, BlockPos const&);
    void getEvergreenColor(float, float);
    void getGrassColor(BlockSource &, BlockPos const&);
    void getMapFoliageColor(float, float);
    void getGrassColor(float, float);
    void getBirchColor(float, float);
    void getFoliageColor(float, float);
    void _getX(float, float);
    void getMapEvergreenColor(float, float);
    void setFoliageColorPalette(std::string const&, mce::Image &);
};
