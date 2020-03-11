#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/Scheduler.h"
#include "./Dimension.h"
#include "../bedrock/level/Level.h"


class NetherDimension : Dimension {

public:
    virtual ~NetherDimension();
    virtual void init();
    virtual void createGenerator();
    virtual void updateLightRamp();
    virtual bool isNaturalDimension()const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual void getMaxFogEnd()const;
    virtual void getMaxFogStart()const;
    virtual bool isFoggyAt(int, int)const;
    virtual void mayRespawn()const;
    virtual void showSky()const;
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    virtual void getTimeOfDay(int, float)const;

    NetherDimension(Level &, Scheduler &);
};
