#pragma once

class Weather : LevelListener {

public:
    virtual ~Weather();
    virtual void levelEvent(LevelEvent, Vec3 const&, int);

    void Weather(Dimension &);
    void setRainLevel(float);
    void setLightningLevel(float);
    bool isSnowTemperature(BlockSource &, BlockPos const&)const;
    void tick(void);
    void serverTick(void);
    void calcLightningCycleTime(void)const;
    void _notifyWeatherChangedEvent(LevelData const&)const;
    void calcRainCycleTime(void)const;
    void calcRainDuration(void)const;
    void getLightningLevel(float)const;
    void getRainLevel(float)const;
    void getFogLevel(void)const;
    void setFogLevel(float);
    bool isLightning(void)const;
    bool isRaining(void)const;
    bool isPrecipitatingAt(BlockSource &, BlockPos const&)const;
    bool isRainingAt(BlockSource &, BlockPos const&)const;
    bool isSnowingAt(BlockSource &, BlockPos const&)const;
    void getSkyFlashTime(void)const;
    void setSkyFlashTime(int);
    void stop(void);
    bool canPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool, int *)const;
    void calcSnowBlockDepth(BlockSource &, BlockPos const&, int)const;
    void blockSupportsFallingSnow(Block const&)const;
    void tryToPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool);
    void rebuildTopSnowToDepth(BlockSource &, BlockPos const&, int);
};
