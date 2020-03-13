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

    void _index(float, float); // _ZN12FoliageColor6_indexEff
    void _getX(float, float); // _ZN12FoliageColor5_getXEff
    void _getY(float, float); // _ZN12FoliageColor5_getYEff
    void getGrassColor(std::string const&, float, float); // _ZN12FoliageColor13getGrassColorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEff
    void getGrassColor(std::string const&, float); // _ZN12FoliageColor13getGrassColorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEf
    void getFoliageColor(std::string const&, float, float); // _ZN12FoliageColor15getFoliageColorERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEff
    void getMapGrassColor(float, float); // _ZN12FoliageColor16getMapGrassColorEff
    void getMapFoliageColor(float, float); // _ZN12FoliageColor18getMapFoliageColorEff
    void getGrassColor(float, float); // _ZN12FoliageColor13getGrassColorEff
    void getFoliageColor(float, float); // _ZN12FoliageColor15getFoliageColorEff
    void getEvergreenColor(float, float); // _ZN12FoliageColor17getEvergreenColorEff
    void getMapEvergreenColor(float, float); // _ZN12FoliageColor20getMapEvergreenColorEff
    void getBirchColor(float, float); // _ZN12FoliageColor13getBirchColorEff
    void getMapBirchColor(float, float); // _ZN12FoliageColor16getMapBirchColorEff
    void getDefaultColor(); // _ZN12FoliageColor15getDefaultColorEv
    void _toRGB(int); // _ZN12FoliageColor6_toRGBEi
    void calculateMapGrassColorHelper(BlockSource &, BlockPos const&, BlockPos const&, int &, int &, int &); // _ZN12FoliageColor28calculateMapGrassColorHelperER11BlockSourceRK8BlockPosS4_RiS5_S5_
    void getGrassColor(BlockSource &, BlockPos const&); // _ZN12FoliageColor13getGrassColorER11BlockSourceRK8BlockPos
    void getMapGrassColor(BlockSource &, BlockPos const&); // _ZN12FoliageColor16getMapGrassColorER11BlockSourceRK8BlockPos
    void _setPalette(mce::Image const&, std::array<int, 65536ul> &); // _ZN12FoliageColor11_setPaletteERKN3mce5ImageERSt5arrayIiLm65536EE
    void setGrassColorPalette(std::string const&, mce::Image &); // _ZN12FoliageColor20setGrassColorPaletteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN3mce5ImageE
    void setFoliageColorPalette(std::string const&, mce::Image &); // _ZN12FoliageColor22setFoliageColorPaletteERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN3mce5ImageE
    void buildGrassColor(BlockPos const&, BlockPos const&, BlockSource &, Random &); // _ZN12FoliageColor15buildGrassColorERK8BlockPosS2_R11BlockSourceR6Random
    void getGrassNoise(); // _ZN12FoliageColor13getGrassNoiseEv
};
