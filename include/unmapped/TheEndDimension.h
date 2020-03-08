#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/Level"
#include "../bedrock/util/Vec3"
#include "../bedrock/Scheduler"


class TheEndDimension : Dimension {

public:
    static long AMBIENT_MULTIPLIER;

    virtual TheEndDimension::~TheEndDimension()
    virtual void init();
    virtual void tick();
    virtual void createGenerator();
    virtual bool isNaturalDimension()const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual bool isFoggyAt(int, int)const;
    virtual void getCloudHeight()const;
    virtual void getDefaultBiome()const;
    virtual void mayRespawn()const;
    virtual bool hasGround()const;
    virtual void getSpawnPos()const;
    virtual void getSpawnYPosition()const;
    virtual bool isDay()const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
    virtual void startLeaveGame();
    virtual void getTimeOfDay(int, float)const;

    void getDragonFight();
    TheEndDimension(Level &, Scheduler &);
};
