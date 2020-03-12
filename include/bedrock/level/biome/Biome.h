#pragma once

#include <string>
#include "../../../unmapped/HashString.h"


class Biome {

public:
    static long RAIN_TEMP_THRESHOLD;
    static long HEIGHTS_DEFAULT;
    static long DEFAULT_WATER_COLOR;
    static long DEFAULT_UNDERWATER_COLOR;

    ~Biome();
    void setTemperatureAndDownfall(float, float);
    void getFreezingHeight(BlockSource const&, BlockPos const&)const;
    void getDownfall()const;
    void getMapEvergreenFoliageColor(BlockPos const&)const;
    void initBiome(Json::Value &);
    bool canHaveSnowfall()const;
    void buildCachedTemperatureNoise(LevelChunk &);
    void setColor(int);
    void setMapWaterColor(int);
//  void setOceanRuinConfig(OceanRuinConfiguration const&); //TODO: incomplete function definition
    void getBirchFoliageColor(BlockPos const&)const;
    void getTemperatureWorldGen(BlockPos const&)const;
    void getBiomeInfoNoise()const;
    void getTemperature(BlockSource const&, BlockPos const&)const;
    void initEntity(EntityRegistryOwned &);
    void setDebugMapOddColor(int);
    void setNoRain();
    bool hasTag(WellKnownTagID const&)const;
    void getMobs()const;
    void getDebugMapOddColor()const;
    void operator==(Biome const&)const;
    void getMapGrassColor(BlockPos const&)const;
    Biome(int);
    void getMinSnowLayers()const;
    void addTag(Util::HashString, TagRegistry &);
//  bool hasTag(IDType<TagIDType> const&, TagRegistry const&)const; //TODO: incomplete function definition
    void setOddColor(int);
    void getMapBirchFoliageColor(BlockPos const&)const;
    bool isHumid()const;
    void getMobsMutable();
    bool canHaveSnowfall(BlockSource const&, BlockPos const&)const;
    void setColor(int, bool);
    void getDownfallInt();
    void setDepthAndScale(BiomeHeight const&);
    void getGrassColor(BlockPos const&)const;
    void getWaterNoise();
    void initBiomeDefault(Json::Value &);
    void getEvergreenFoliageColor(BlockPos const&)const;
    void setName(std::string const&);
    void getFoliageColor(BlockPos const&)const;
    void initFromPacketData(CompoundTag const&, TagRegistry &);
    std::string getName()const;
    void getSnowAccumulationLayers()const;
    void getBiomeType()const;
    void setSnowCovered();
    void operator!=(Biome const&)const;
    bool isSnowCovered()const;
    void writePacketData(CompoundTag &, TagRegistry &);
    void setSnowAccumulation(float, float);
    void getMaxSnowLayers()const;
    void setWaterColors(Color const&, float, Color const&, float);
    void setFogDist(float);
    void getTemperatureCategory()const;
    void buildWaterColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getWaterColor(BlockSource &, BlockPos const&);
    void getDebugMapColor()const;
    void getDefaultBiomeTemperature()const;
    void getEntity()const;
    void getSkyColor(float);
    void getMapFoliageColor(BlockPos const&)const;
};
