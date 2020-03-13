#pragma once

#include "Dimension.h"


class TheEndDimension : Dimension {

public:
    static long AMBIENT_MULTIPLIER;

    ~TheEndDimension(); // _ZN15TheEndDimensionD2Ev
    virtual void init(); // _ZN15TheEndDimension4initEv
    virtual void tick(); // _ZN15TheEndDimension4tickEv
    virtual void createGenerator(); // _ZN15TheEndDimension15createGeneratorEv
    virtual bool isNaturalDimension()const; // _ZNK15TheEndDimension18isNaturalDimensionEv
    virtual bool isValidSpawn(int, int)const; // _ZNK15TheEndDimension12isValidSpawnEii
    virtual void getFogColor(float)const; // _ZNK15TheEndDimension11getFogColorEf
    virtual bool isFoggyAt(int, int)const; // _ZNK15TheEndDimension9isFoggyAtEii
    virtual void getCloudHeight()const; // _ZNK15TheEndDimension14getCloudHeightEv
    virtual void getDefaultBiome()const; // _ZNK15TheEndDimension15getDefaultBiomeEv
    virtual void mayRespawn()const; // _ZNK15TheEndDimension10mayRespawnEv
    virtual bool hasGround()const; // _ZNK15TheEndDimension9hasGroundEv
    virtual void getSpawnPos()const; // _ZNK15TheEndDimension11getSpawnPosEv
    virtual void getSpawnYPosition()const; // _ZNK15TheEndDimension17getSpawnYPositionEv
    virtual bool isDay()const; // _ZNK15TheEndDimension5isDayEv
    virtual void getSunIntensity(float, Vec3 const&, float)const; // _ZNK15TheEndDimension15getSunIntensityEfRK4Vec3f
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK15TheEndDimension27translatePosAcrossDimensionERK4Vec311AutomaticIDI9DimensioniE
    virtual void deserialize(CompoundTag const&); // _ZN15TheEndDimension11deserializeERK11CompoundTag
    virtual void serialize(CompoundTag &)const; // _ZNK15TheEndDimension9serializeER11CompoundTag
    virtual void startLeaveGame(); // _ZN15TheEndDimension14startLeaveGameEv
    virtual void getTimeOfDay(int, float)const; // _ZNK15TheEndDimension12getTimeOfDayEif
    void getDragonFight(); // _ZN15TheEndDimension14getDragonFightEv
    TheEndDimension(Level &, Scheduler &); // _ZN15TheEndDimensionC2ER5LevelR9Scheduler
};
