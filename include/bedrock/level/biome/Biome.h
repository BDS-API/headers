#pragma once

#include "../../util/Random.h"
#include <string>
#include "../../../unmapped/WellKnownTagID.h"
#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/BiomeHeight.h"
#include "../../../unmapped/HashString.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../../json/Value.h"
#include "../LevelChunk.h"
#include "./Biome.h"
#include "../../util/Color.h"
#include "../../../unmapped/TagRegistry.h"
#include "../../../unmapped/EntityRegistryOwned.h"


class Biome {

public:
    static long RAIN_TEMP_THRESHOLD;
    static long HEIGHTS_DEFAULT;
    static long DEFAULT_WATER_COLOR;
    static long DEFAULT_UNDERWATER_COLOR;

    virtual ~Biome();

    void getEntity()const;
    void operator!=(Biome const&)const;
    std::string getName()const;
    void getMaxSnowLayers()const;
    void writePacketData(CompoundTag &, TagRegistry &);
    void initFromPacketData(CompoundTag const&, TagRegistry &);
    void setTemperatureAndDownfall(float, float);
    void addTag(Util::HashString, TagRegistry &);
    void initEntity(EntityRegistryOwned &);
    void initBiomeDefault(Json::Value &);
    void initBiome(Json::Value &);
    Biome(int);
    void setDepthAndScale(BiomeHeight const&);
    void setName(std::string const&);
    void setColor(int);
    void setColor(int, bool);
    void setMapWaterColor(int);
    void setOddColor(int);
    void setWaterColors(Color const&, float, Color const&, float);
    void setFogDist(float);
    void setNoRain();
    void setSnowCovered();
    void setSnowAccumulation(float, float);
//  void setOceanRuinConfig(OceanRuinConfiguration const&); //TODO: incomplete function definition
    void getSnowAccumulationLayers()const;
//  bool hasTag(IDType<TagIDType> const&, TagRegistry const&)const; //TODO: incomplete function definition
    bool hasTag(WellKnownTagID const&)const;
    void getSkyColor(float);
    void getMobs()const;
    void getMobsMutable();
    void getFoliageColor(BlockPos const&)const;
    void getDefaultBiomeTemperature()const;
    void getDownfall()const;
    void getBirchFoliageColor(BlockPos const&)const;
    void getEvergreenFoliageColor(BlockPos const&)const;
    void getMapFoliageColor(BlockPos const&)const;
    void getMapBirchFoliageColor(BlockPos const&)const;
    void getMapEvergreenFoliageColor(BlockPos const&)const;
    void buildWaterColor(BlockPos const&, BlockPos const&, BlockSource &, Random &);
    void getWaterColor(BlockSource &, BlockPos const&);
    void getWaterNoise();
    void getGrassColor(BlockPos const&)const;
    void getMapGrassColor(BlockPos const&)const;
    void getDebugMapColor()const;
    void getDebugMapOddColor()const;
    void getBiomeInfoNoise()const;
    void getBiomeType()const;
    void getTemperatureCategory()const;
    void getDownfallInt();
    bool isSnowCovered()const;
    bool isHumid()const;
    void getTemperature(BlockSource const&, BlockPos const&)const;
    void getTemperatureWorldGen(BlockPos const&)const;
    void buildCachedTemperatureNoise(LevelChunk &);
    void getFreezingHeight(BlockSource const&, BlockPos const&)const;
    bool canHaveSnowfall(BlockSource const&, BlockPos const&)const;
    void setDebugMapOddColor(int);
    void operator==(Biome const&)const;
    void getMinSnowLayers()const;
    bool canHaveSnowfall()const;
};
