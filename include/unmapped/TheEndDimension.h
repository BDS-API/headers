#pragma once

#include "Dimension.h"


class TheEndDimension : Dimension {

public:
    static long AMBIENT_MULTIPLIER;

    virtual bool isDay()const;
    virtual void getFogColor(float)const;
    virtual void deserialize(CompoundTag const&);
    virtual bool isNaturalDimension()const;
    virtual bool hasGround()const;
    virtual void createGenerator();
    virtual void serialize(CompoundTag &)const;
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    virtual void getSpawnYPosition()const;
    virtual void getSpawnPos()const;
    virtual void getCloudHeight()const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual bool isFoggyAt(int, int)const;
    virtual void startLeaveGame();
    ~TheEndDimension();
    virtual bool isValidSpawn(int, int)const;
    virtual void init();
    virtual void getDefaultBiome()const;
    virtual void getTimeOfDay(int, float)const;
    virtual void tick();
    virtual void mayRespawn()const;
    TheEndDimension(Level &, Scheduler &);
    void getDragonFight();
};
