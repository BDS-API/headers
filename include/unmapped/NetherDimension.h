#pragma once

#include "Dimension.h"


class NetherDimension : Dimension {

public:
    virtual void getMaxFogStart()const;
    virtual void getFogColor(float)const;
    virtual void getTimeOfDay(int, float)const;
    virtual void createGenerator();
    virtual void init();
    virtual void showSky()const;
    virtual void getMaxFogEnd()const;
    virtual bool isValidSpawn(int, int)const;
    virtual void updateLightRamp();
    ~NetherDimension();
    virtual bool isFoggyAt(int, int)const;
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    virtual bool isNaturalDimension()const;
    virtual void mayRespawn()const;
    NetherDimension(Level &, Scheduler &);
};
