#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/Scheduler.h"
#include "../bedrock/level/Level.h"
#include "Dimension.h"


class NetherDimension : Dimension {

public:
    virtual void createGenerator();
    virtual void getFogColor(float)const;
    virtual bool isNaturalDimension()const;
    virtual void init();
    ~NetherDimension();
    virtual bool isFoggyAt(int, int)const;
    virtual void mayRespawn()const;
    virtual void showSky()const;
    virtual void getMaxFogStart()const;
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    virtual void getTimeOfDay(int, float)const;
    virtual void updateLightRamp();
    virtual void getMaxFogEnd()const;
    virtual bool isValidSpawn(int, int)const;
    NetherDimension(Level &, Scheduler &);
};
