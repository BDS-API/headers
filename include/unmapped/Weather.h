#pragma once

#include "../bedrock/level/LevelListener.h"
#include "../bedrock/level/LevelData.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "Dimension.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"


class Weather : LevelListener {

public:
    ~Weather();
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition
    void setRainLevel(float);
    void tryToPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool);
    bool canPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool, int *)const;
    void tick();
    bool isSnowingAt(BlockSource &, BlockPos const&)const;
    void getSkyFlashTime()const;
    void calcSnowBlockDepth(BlockSource &, BlockPos const&, int)const;
    void rebuildTopSnowToDepth(BlockSource &, BlockPos const&, int);
    bool isSnowTemperature(BlockSource &, BlockPos const&)const;
    bool isRaining()const;
    void getLightningLevel(float)const;
    bool isRainingAt(BlockSource &, BlockPos const&)const;
    bool isLightning()const;
    void setFogLevel(float);
    Weather(Dimension &);
    void calcRainDuration()const;
    void getFogLevel()const;
    void blockSupportsFallingSnow(Block const&)const;
    void serverTick();
    void calcLightningCycleTime()const;
    void setSkyFlashTime(int);
    void calcRainCycleTime()const;
    void _notifyWeatherChangedEvent(LevelData const&)const;
    void stop();
    void getRainLevel(float)const;
    bool isPrecipitatingAt(BlockSource &, BlockPos const&)const;
    void setLightningLevel(float);
};
