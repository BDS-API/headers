#pragma once

#include "../bedrock/level/LevelListener.h"


class Weather : LevelListener {

public:
    ~Weather();
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    bool isRainingAt(BlockSource &, BlockPos const&)const;
    void _notifyWeatherChangedEvent(LevelData const&)const;
    void setSkyFlashTime(int);
    void calcRainDuration()const;
    void getLightningLevel(float)const;
    void getRainLevel(float)const;
    bool isPrecipitatingAt(BlockSource &, BlockPos const&)const;
    void getFogLevel()const;
    bool isRaining()const;
    bool canPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool, int *)const;
    void serverTick();
    void rebuildTopSnowToDepth(BlockSource &, BlockPos const&, int);
    void calcRainCycleTime()const;
    void tick();
    void getSkyFlashTime()const;
    bool isLightning()const;
    void calcSnowBlockDepth(BlockSource &, BlockPos const&, int)const;
    Weather(Dimension &);
    void setRainLevel(float);
    void stop();
    void tryToPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool);
    void setLightningLevel(float);
    void blockSupportsFallingSnow(Block const&)const;
    bool isSnowingAt(BlockSource &, BlockPos const&)const;
    void calcLightningCycleTime()const;
    void setFogLevel(float);
    bool isSnowTemperature(BlockSource &, BlockPos const&)const;
};
