#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/level/LevelListener"
#include "../bedrock/level/LevelData"


class Weather : LevelListener {

public:
    virtual Weather::~Weather()
    virtual void levelEvent(LevelEvent, Vec3 const&, int);

    Weather(Dimension &);
    void setRainLevel(float);
    void setLightningLevel(float);
    bool isSnowTemperature(BlockSource &, BlockPos const&)const;
    void tick();
    void serverTick();
    void calcLightningCycleTime()const;
    void _notifyWeatherChangedEvent(LevelData const&)const;
    void calcRainCycleTime()const;
    void calcRainDuration()const;
    void getLightningLevel(float)const;
    void getRainLevel(float)const;
    void getFogLevel()const;
    void setFogLevel(float);
    bool isLightning()const;
    bool isRaining()const;
    bool isPrecipitatingAt(BlockSource &, BlockPos const&)const;
    bool isRainingAt(BlockSource &, BlockPos const&)const;
    bool isSnowingAt(BlockSource &, BlockPos const&)const;
    void getSkyFlashTime()const;
    void setSkyFlashTime(int);
    void stop();
    bool canPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool, int *)const;
    void calcSnowBlockDepth(BlockSource &, BlockPos const&, int)const;
    void blockSupportsFallingSnow(Block const&)const;
    void tryToPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool);
    void rebuildTopSnowToDepth(BlockSource &, BlockPos const&, int);
};
