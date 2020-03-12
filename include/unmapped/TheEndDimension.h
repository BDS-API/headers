#pragma once

#include "../bedrock/level/Level.h"
#include "../bedrock/Scheduler.h"
#include "../bedrock/util/Vec3.h"
#include "Dimension.h"
#include "../bedrock/nbt/CompoundTag.h"


class TheEndDimension : Dimension {

public:
    static long AMBIENT_MULTIPLIER;

    virtual void serialize(CompoundTag &)const;
    virtual void init();
    virtual bool isNaturalDimension()const;
    virtual void getDefaultBiome()const;
    virtual void mayRespawn()const;
    virtual bool isDay()const;
    virtual void createGenerator();
    virtual void getSpawnPos()const;
    virtual void tick();
    virtual bool hasGround()const;
    virtual void getTimeOfDay(int, float)const;
    virtual void getSpawnYPosition()const;
    virtual void startLeaveGame();
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getCloudHeight()const;
    ~TheEndDimension();
    virtual void getFogColor(float)const;
    virtual void deserialize(CompoundTag const&);
//  virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    virtual bool isFoggyAt(int, int)const;
    void getDragonFight();
    TheEndDimension(Level &, Scheduler &);
};
