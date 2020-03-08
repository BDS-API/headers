#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"
#include "../mce/Image"


class FoliageColor {

public:
    static long GRASS_TOP_LEFT;
    static long GRASS_TOP_RIGHT;
    static long GRASS_BOTTOM_LEFT;
    static long GRASS_BOTTOM_RIGHT;
    static long FOLIAGE_TOP_LEFT;
    static long FOLIAGE_TOP_RIGHT;
    static long FOLIAGE_BOTTOM_LEFT;
    static long FOLIAGE_BOTTOM_RIGHT;
    static long mGrassPalettes[abi:cxx11];
    static long mFoliagePalettes[abi:cxx11];


    void _index(float, float);
    void _getX(float, float);
    void _getY(float, float);
    void getGrassColor(std::string const&, float, float);
    void getGrassColor(std::string const&, float);
    void getFoliageColor(std::string const&, float, float);
    void getMapGrassColor(float, float);
    void getMapFoliageColor(float, float);
    void getGrassColor(float, float);
    void getFoliageColor(float, float);
    void getEvergreenColor(float, float);
    void getMapEvergreenColor(float, float);
    void getBirchColor(float, float);
    void getMapBirchColor(float, float);
    void getDefaultColor();
    void _toRGB(int);
    void calculateMapGrassColorHelper(BlockSource &, BlockPos const&, BlockPos const&, int &, int &, int &);
    void getGrassColor(BlockSource &, BlockPos const&);
    void getMapGrassColor(BlockSource &, BlockPos const&);
    void _setPalette(mce::Image const&, std::array<int, 65536ul> &);
    void setGrassColorPalette(std::string const&, mce::Image &);
    void setFoliageColorPalette(std::string const&, mce::Image &);
    void buildGrassColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getGrassNoise();
};
