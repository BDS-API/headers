#pragma once

#include "Actor.h"


class ExperienceOrb : Actor {

public:
    static long LIFETIME;

    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void playerTouch(Player &);
    virtual void doWaterSplashEffect();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void normalTick();
    ~ExperienceOrb();
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void getShadowRadius()const;
    void handleMending(Player &);
    ExperienceOrb(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getIconIndex()const;
    void setValue(int);
    void durabilityToXP(int);
    void getValue()const;
//  void spawnOrbs(BlockSource &, Vec3 const&, int, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition
//  void spawnOrbs(BlockSource &, Vec3 const&, int, ExperienceOrb::DropType, Player *); //TODO: incomplete function definition
    void truncateExperienceAmount(int);
    void xpToDurability(int);
};
