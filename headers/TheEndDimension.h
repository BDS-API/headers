#pragma once

class TheEndDimension : Dimension {

public:
    static long AMBIENT_MULTIPLIER;

    virtual ~TheEndDimension();
    virtual void init(void);
    virtual void tick(void);
    virtual void createGenerator(void);
    virtual bool isNaturalDimension(void)const;
    virtual bool isValidSpawn(int, int)const;
    virtual void getFogColor(float)const;
    virtual bool isFoggyAt(int, int)const;
    virtual void getCloudHeight(void)const;
    virtual void getDefaultBiome(void)const;
    virtual void mayRespawn(void)const;
    virtual bool hasGround(void)const;
    virtual void getSpawnPos(void)const;
    virtual void getSpawnYPosition(void)const;
    virtual bool isDay(void)const;
    virtual void getSunIntensity(float, Vec3 const&, float)const;
    virtual void translatePosAcrossDimension(Vec3 const&, AutomaticID<Dimension, int>)const;
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
    virtual void startLeaveGame(void);
    virtual void getTimeOfDay(int, float)const;

    void getDragonFight(void);
    void TheEndDimension(Level &, Scheduler &);
};
