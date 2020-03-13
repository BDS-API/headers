#pragma once

#include "../bedrock/level/LevelListener.h"


class Weather : LevelListener {

public:
    ~Weather(); // _ZN7WeatherD2Ev
//  virtual void levelEvent(LevelEvent, Vec3 const&, int); //TODO: incomplete function definition // _ZN7Weather10levelEventE10LevelEventRK4Vec3i
    Weather(Dimension &); // _ZN7WeatherC2ER9Dimension
    void setRainLevel(float); // _ZN7Weather12setRainLevelEf
    void setLightningLevel(float); // _ZN7Weather17setLightningLevelEf
    bool isSnowTemperature(BlockSource &, BlockPos const&)const; // _ZNK7Weather17isSnowTemperatureER11BlockSourceRK8BlockPos
    void tick(); // _ZN7Weather4tickEv
    void serverTick(); // _ZN7Weather10serverTickEv
    void calcLightningCycleTime()const; // _ZNK7Weather22calcLightningCycleTimeEv
    void _notifyWeatherChangedEvent(LevelData const&)const; // _ZNK7Weather26_notifyWeatherChangedEventERK9LevelData
    void calcRainCycleTime()const; // _ZNK7Weather17calcRainCycleTimeEv
    void calcRainDuration()const; // _ZNK7Weather16calcRainDurationEv
    void getLightningLevel(float)const; // _ZNK7Weather17getLightningLevelEf
    void getRainLevel(float)const; // _ZNK7Weather12getRainLevelEf
    void getFogLevel()const; // _ZNK7Weather11getFogLevelEv
    void setFogLevel(float); // _ZN7Weather11setFogLevelEf
    bool isLightning()const; // _ZNK7Weather11isLightningEv
    bool isRaining()const; // _ZNK7Weather9isRainingEv
    bool isPrecipitatingAt(BlockSource &, BlockPos const&)const; // _ZNK7Weather17isPrecipitatingAtER11BlockSourceRK8BlockPos
    bool isRainingAt(BlockSource &, BlockPos const&)const; // _ZNK7Weather11isRainingAtER11BlockSourceRK8BlockPos
    bool isSnowingAt(BlockSource &, BlockPos const&)const; // _ZNK7Weather11isSnowingAtER11BlockSourceRK8BlockPos
    void getSkyFlashTime()const; // _ZNK7Weather15getSkyFlashTimeEv
    void setSkyFlashTime(int); // _ZN7Weather15setSkyFlashTimeEi
    void stop(); // _ZN7Weather4stopEv
    bool canPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool, int *)const; // _ZNK7Weather15canPlaceTopSnowER11BlockSourceRK8BlockPosbbPi
    void calcSnowBlockDepth(BlockSource &, BlockPos const&, int)const; // _ZNK7Weather18calcSnowBlockDepthER11BlockSourceRK8BlockPosi
    void blockSupportsFallingSnow(Block const&)const; // _ZNK7Weather24blockSupportsFallingSnowERK5Block
    void tryToPlaceTopSnow(BlockSource &, BlockPos const&, bool, bool); // _ZN7Weather17tryToPlaceTopSnowER11BlockSourceRK8BlockPosbb
    void rebuildTopSnowToDepth(BlockSource &, BlockPos const&, int); // _ZN7Weather21rebuildTopSnowToDepthER11BlockSourceRK8BlockPosi
};
