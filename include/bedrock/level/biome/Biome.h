#pragma once

#include "../../../unmapped/BiomeHeight.h"
#include "../../../json/Value.h"
#include "../../../unmapped/WellKnownTagID.h"
#include "../../util/Random.h"
#include "../../../unmapped/HashString.h"
#include "../../block/unmapped/BlockSource.h"
#include <string>
#include "../../util/Color.h"
#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/TagRegistry.h"
#include "../../util/BlockPos.h"
#include "../LevelChunk.h"
#include "../../../unmapped/EntityRegistryOwned.h"


class Biome {

public:
    static long RAIN_TEMP_THRESHOLD;
    static long HEIGHTS_DEFAULT;
    static long DEFAULT_WATER_COLOR;
    static long DEFAULT_UNDERWATER_COLOR;

    ~Biome();
    void initBiome(Json::Value &);
    void setDepthAndScale(BiomeHeight const&);
    void getDebugMapColor()const;
    void getTemperatureCategory()const;
    bool isHumid()const;
    void getMapEvergreenFoliageColor(BlockPos const&)const;
    bool canHaveSnowfall(BlockSource const&, BlockPos const&)const;
    void getMapGrassColor(BlockPos const&)const;
    void getMinSnowLayers()const;
    Biome(int);
    void getMapBirchFoliageColor(BlockPos const&)const;
    void setColor(int);
    void buildWaterColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getSkyColor(float);
    void initBiomeDefault(Json::Value &);
//  bool hasTag(IDType<TagIDType> const&, TagRegistry const&)const; //TODO: incomplete function definition
    void addTag(Util::HashString, TagRegistry &);
//  void setOceanRuinConfig(OceanRuinConfiguration const&); //TODO: incomplete function definition
    void getEvergreenFoliageColor(BlockPos const&)const;
    void getTemperatureWorldGen(BlockPos const&)const;
    void setName(std::string const&);
    void getDebugMapOddColor()const;
    void operator==(Biome const&)const;
    void setSnowAccumulation(float, float);
    void writePacketData(CompoundTag &, TagRegistry &);
    void setWaterColors(Color const&, float, Color const&, float);
    bool hasTag(WellKnownTagID const&)const;
    void initEntity(EntityRegistryOwned &);
    std::string getName()const;
    void setTemperatureAndDownfall(float, float);
    void initFromPacketData(CompoundTag const&, TagRegistry &);
    void getMobs()const;
    void getMapFoliageColor(BlockPos const&)const;
    void getTemperature(BlockSource const&, BlockPos const&)const;
    void getFreezingHeight(BlockSource const&, BlockPos const&)const;
    bool isSnowCovered()const;
    bool canHaveSnowfall()const;
    void setOddColor(int);
    void setFogDist(float);
    void operator!=(Biome const&)const;
    void getGrassColor(BlockPos const&)const;
    void getDownfallInt();
    void getEntity()const;
    void setSnowCovered();
    void getDefaultBiomeTemperature()const;
    void getBiomeType()const;
    void getFoliageColor(BlockPos const&)const;
    void getMaxSnowLayers()const;
    void setDebugMapOddColor(int);
    void getBirchFoliageColor(BlockPos const&)const;
    void getWaterColor(BlockSource &, BlockPos const&);
    void getBiomeInfoNoise()const;
    void getSnowAccumulationLayers()const;
    void getMobsMutable();
    void getDownfall()const;
    void setNoRain();
    void buildCachedTemperatureNoise(LevelChunk &);
    void getWaterNoise();
    void setMapWaterColor(int);
    void setColor(int, bool);
};
