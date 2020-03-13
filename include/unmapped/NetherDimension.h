#pragma once

#include "Dimension.h"


class NetherDimension : Dimension {

public:
    ~NetherDimension(); // _ZN15NetherDimensionD2Ev
    virtual void init(); // _ZN15NetherDimension4initEv
    virtual void createGenerator(); // _ZN15NetherDimension15createGeneratorEv
    virtual void updateLightRamp(); // _ZN15NetherDimension15updateLightRampEv
    virtual bool isNaturalDimension()const; // _ZNK15NetherDimension18isNaturalDimensionEv
    virtual bool isValidSpawn(int, int)const; // _ZNK15NetherDimension12isValidSpawnEii
    virtual void getFogColor(float)const; // _ZNK15NetherDimension11getFogColorEf
    virtual void getMaxFogEnd()const; // _ZNK15NetherDimension12getMaxFogEndEv
    virtual void getMaxFogStart()const; // _ZNK15NetherDimension14getMaxFogStartEv
    virtual bool isFoggyAt(int, int)const; // _ZNK15NetherDimension9isFoggyAtEii
    virtual void mayRespawn()const; // _ZNK15NetherDimension10mayRespawnEv
    virtual void showSky()const; // _ZNK15NetherDimension7showSkyEv
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK15NetherDimension27translatePosAcrossDimensionERK4Vec311AutomaticIDI9DimensioniE
    virtual void getTimeOfDay(int, float)const; // _ZNK15NetherDimension12getTimeOfDayEif
    NetherDimension(Level &, Scheduler &); // _ZN15NetherDimensionC2ER5LevelR9Scheduler
};
