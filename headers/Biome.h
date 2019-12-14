#pragma once

class Biome {

public:
    static long Biome::RAIN_TEMP_THRESHOLD;
    static long Biome::HEIGHTS_DEFAULT;
    static long Biome::DEFAULT_WATER_COLOR;
    static long Biome::DEFAULT_UNDERWATER_COLOR;

    virtual ~Biome();

    void getEntity(void)const;
    void getMaxSnowLayers(void)const;
    void writePacketData(CompoundTag &, TagRegistry &);
    void initFromPacketData(CompoundTag const&, TagRegistry &);
    void setTemperatureAndDownfall(float, float);
    void addTag(Util::HashString, TagRegistry &);
    void initEntity(EntityRegistryOwned &);
    void initBiomeDefault(Json::Value &);
    void initBiome(Json::Value &);
    void Biome(int);
    void setDepthAndScale(BiomeHeight const&);
    void setName(std::string const&);
    void setColor(int);
    void setColor(int, bool);
    void setMapWaterColor(int);
    void setOddColor(int);
    void setWaterColors(Color const&, float, Color const&, float);
    void setFogDist(float);
    void setNoRain(void);
    void setSnowCovered(void);
    void setSnowAccumulation(float, float);
    void setOceanRuinConfig(OceanRuinConfiguration const&);
    void getSnowAccumulationLayers(void)const;
    bool hasTag(IDType<TagIDType> const&, TagRegistry const&)const;
    bool hasTag(WellKnownTagID const&)const;
    void getSkyColor(float);
    void getMobs(void)const;
    void getMobsMutable(void);
    void getFoliageColor(BlockPos const&)const;
    void getDefaultBiomeTemperature(void)const;
    void getDownfall(void)const;
    void getBirchFoliageColor(BlockPos const&)const;
    void getEvergreenFoliageColor(BlockPos const&)const;
    void getMapFoliageColor(BlockPos const&)const;
    void getMapBirchFoliageColor(BlockPos const&)const;
    void getMapEvergreenFoliageColor(BlockPos const&)const;
    void buildWaterColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getWaterColor(BlockSource &, BlockPos const&);
    void getWaterNoise(void);
    void getGrassColor(BlockPos const&)const;
    void getMapGrassColor(BlockPos const&)const;
    void getDebugMapColor(void)const;
    void getDebugMapOddColor(void)const;
    void getBiomeInfoNoise(void)const;
    void getBiomeType(void)const;
    void getTemperatureCategory(void)const;
    void getDownfallInt(void);
    bool isSnowCovered(void)const;
    bool isHumid(void)const;
    void getTemperature(BlockSource const&, BlockPos const&)const;
    void getTemperatureWorldGen(BlockPos const&)const;
    void buildCachedTemperatureNoise(LevelChunk &);
    void getFreezingHeight(BlockSource const&, BlockPos const&)const;
    bool canHaveSnowfall(BlockSource const&, BlockPos const&)const;
    void setDebugMapOddColor(int);
    void getMinSnowLayers(void)const;
    bool canHaveSnowfall(void)const;
};
