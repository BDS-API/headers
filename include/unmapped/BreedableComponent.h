#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class BreedableComponent {

public:
    BreedableComponent(BreedableComponent &&);
    void setInLove(Actor &, Player const*);
    void getLoveTimer()const;
    void addAdditionalSaveData(CompoundTag &);
    void mate(Actor &, Actor &);
    void getLoveCause(Actor const&)const;
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void setLoveTimer(int);
    void decrementBreedCooldown();
    void _meetsEnvironmentRequirements(Actor &);
    bool canMate(Actor const&, Actor const&)const;
    void _handlePregnancy(Actor &, Actor &);
    BreedableComponent();
    void getBreedCooldown()const;
    void resetLove(Actor &);
    void decrementLoveTimer();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _handleMate(Actor &, Actor &);
};
