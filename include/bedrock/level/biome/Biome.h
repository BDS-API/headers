#pragma once

#include <string>
#include "../../../unmapped/HashString.h"


class Biome {

public:
    static long RAIN_TEMP_THRESHOLD;
    static long HEIGHTS_DEFAULT;
    static long DEFAULT_WATER_COLOR;
    static long DEFAULT_UNDERWATER_COLOR;

    ~Biome(); // _ZN5BiomeD2Ev
    void getEntity()const; // _ZNK5Biome9getEntityEv
    void operator!=(Biome const&)const; // _ZNK5BiomeneERKS_
    std::string getName()const; // _ZNK5Biome7getNameB5cxx11Ev
    void getMaxSnowLayers()const; // _ZNK5Biome16getMaxSnowLayersEv
    void writePacketData(CompoundTag &, TagRegistry &); // _ZN5Biome15writePacketDataER11CompoundTagR11TagRegistry
    void initFromPacketData(CompoundTag const&, TagRegistry &); // _ZN5Biome18initFromPacketDataERK11CompoundTagR11TagRegistry
    void setTemperatureAndDownfall(float, float); // _ZN5Biome25setTemperatureAndDownfallEff
    void addTag(Util::HashString, TagRegistry &); // _ZN5Biome6addTagEN4Util10HashStringER11TagRegistry
    void initEntity(EntityRegistryOwned &); // _ZN5Biome10initEntityER19EntityRegistryOwned
    void initBiomeDefault(Json::Value &); // _ZN5Biome16initBiomeDefaultERN4Json5ValueE
    void initBiome(Json::Value &); // _ZN5Biome9initBiomeERN4Json5ValueE
    Biome(int); // _ZN5BiomeC2Ei
    void setDepthAndScale(BiomeHeight const&); // _ZN5Biome16setDepthAndScaleERK11BiomeHeight
    void setName(std::string const&); // _ZN5Biome7setNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setColor(int); // _ZN5Biome8setColorEi
    void setColor(int, bool); // _ZN5Biome8setColorEib
    void setMapWaterColor(int); // _ZN5Biome16setMapWaterColorEi
    void setOddColor(int); // _ZN5Biome11setOddColorEi
    void setWaterColors(Color const&, float, Color const&, float); // _ZN5Biome14setWaterColorsERK5ColorfS2_f
    void setFogDist(float); // _ZN5Biome10setFogDistEf
    void setNoRain(); // _ZN5Biome9setNoRainEv
    void setSnowCovered(); // _ZN5Biome14setSnowCoveredEv
    void setSnowAccumulation(float, float); // _ZN5Biome19setSnowAccumulationEff
//  void setOceanRuinConfig(OceanRuinConfiguration const&); //TODO: incomplete function definition // _ZN5Biome18setOceanRuinConfigERK22OceanRuinConfiguration
    void getSnowAccumulationLayers()const; // _ZNK5Biome25getSnowAccumulationLayersEv
//  bool hasTag(IDType<TagIDType> const&, TagRegistry const&)const; //TODO: incomplete function definition // _ZNK5Biome6hasTagERK6IDTypeI9TagIDTypeERK11TagRegistry
    bool hasTag(WellKnownTagID const&)const; // _ZNK5Biome6hasTagERK14WellKnownTagID
    void getSkyColor(float); // _ZN5Biome11getSkyColorEf
    void getMobs()const; // _ZNK5Biome7getMobsEv
    void getMobsMutable(); // _ZN5Biome14getMobsMutableEv
    void getFoliageColor(BlockPos const&)const; // _ZNK5Biome15getFoliageColorERK8BlockPos
    void getDefaultBiomeTemperature()const; // _ZNK5Biome26getDefaultBiomeTemperatureEv
    void getDownfall()const; // _ZNK5Biome11getDownfallEv
    void getBirchFoliageColor(BlockPos const&)const; // _ZNK5Biome20getBirchFoliageColorERK8BlockPos
    void getEvergreenFoliageColor(BlockPos const&)const; // _ZNK5Biome24getEvergreenFoliageColorERK8BlockPos
    void getMapFoliageColor(BlockPos const&)const; // _ZNK5Biome18getMapFoliageColorERK8BlockPos
    void getMapBirchFoliageColor(BlockPos const&)const; // _ZNK5Biome23getMapBirchFoliageColorERK8BlockPos
    void getMapEvergreenFoliageColor(BlockPos const&)const; // _ZNK5Biome27getMapEvergreenFoliageColorERK8BlockPos
    void buildWaterColor(BlockPos const&, BlockPos const&, BlockSource &, Random &); // _ZN5Biome15buildWaterColorERK8BlockPosS2_R11BlockSourceR6Random
    void getWaterColor(BlockSource &, BlockPos const&); // _ZN5Biome13getWaterColorER11BlockSourceRK8BlockPos
    void getWaterNoise(); // _ZN5Biome13getWaterNoiseEv
    void getGrassColor(BlockPos const&)const; // _ZNK5Biome13getGrassColorERK8BlockPos
    void getMapGrassColor(BlockPos const&)const; // _ZNK5Biome16getMapGrassColorERK8BlockPos
    void getDebugMapColor()const; // _ZNK5Biome16getDebugMapColorEv
    void getDebugMapOddColor()const; // _ZNK5Biome19getDebugMapOddColorEv
    void getBiomeInfoNoise()const; // _ZNK5Biome17getBiomeInfoNoiseEv
    void getBiomeType()const; // _ZNK5Biome12getBiomeTypeEv
    void getTemperatureCategory()const; // _ZNK5Biome22getTemperatureCategoryEv
    void getDownfallInt(); // _ZN5Biome14getDownfallIntEv
    bool isSnowCovered()const; // _ZNK5Biome13isSnowCoveredEv
    bool isHumid()const; // _ZNK5Biome7isHumidEv
    void getTemperature(BlockSource const&, BlockPos const&)const; // _ZNK5Biome14getTemperatureERK11BlockSourceRK8BlockPos
    void getTemperatureWorldGen(BlockPos const&)const; // _ZNK5Biome22getTemperatureWorldGenERK8BlockPos
    void buildCachedTemperatureNoise(LevelChunk &); // _ZN5Biome27buildCachedTemperatureNoiseER10LevelChunk
    void getFreezingHeight(BlockSource const&, BlockPos const&)const; // _ZNK5Biome17getFreezingHeightERK11BlockSourceRK8BlockPos
    bool canHaveSnowfall(BlockSource const&, BlockPos const&)const; // _ZNK5Biome15canHaveSnowfallERK11BlockSourceRK8BlockPos
    void setDebugMapOddColor(int); // _ZN5Biome19setDebugMapOddColorEi
    void operator==(Biome const&)const; // _ZNK5BiomeeqERKS_
    void getMinSnowLayers()const; // _ZNK5Biome16getMinSnowLayersEv
    bool canHaveSnowfall()const; // _ZNK5Biome15canHaveSnowfallEv
};
