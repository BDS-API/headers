#pragma once

#include "../bedrock/level/Level"


class NetherDimension : Dimension {

public:
    virtual NetherDimension::~NetherDimension();
    virtual void init(void);
    virtual void createGenerator(void);
    virtual void updateLightRamp(void);
    virtual bool isNaturalDimension(void)const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual void getMaxFogEnd(void)const;
    virtual void getMaxFogStart(void)const;
    virtual bool isFoggyAt(int, int)const;
    virtual void mayRespawn(void)const;
    virtual void showSky(void)const;
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;
    virtual void getTimeOfDay(int, float)const;

    NetherDimension(Level &, Scheduler &);
};
