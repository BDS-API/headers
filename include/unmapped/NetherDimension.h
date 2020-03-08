#pragma once

#include "../bedrock/Scheduler"
#include "../bedrock/util/Vec3"
#include "../bedrock/level/Level"


class NetherDimension : Dimension {

public:
    NetherDimension::~NetherDimension()
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
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;
    virtual void getTimeOfDay(int, float)const;

    NetherDimension(Level &, Scheduler &);
};
