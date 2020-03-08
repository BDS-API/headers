#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../nbt/CompoundTag"


class Panda : Animal {

public:
    virtual Panda::~Panda();
    virtual void normalTick(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void _onSizeUpdated(void);
    virtual void getAmbientSound(void);
    virtual void setTransitioningSitting(bool);

    Panda(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void updateSitting(void);
    void getSitAmount(float)const;
    void updateLaying(void);
    bool isSneezing(void)const;
    void updateRollAmount(void);
    void getLieOnBackAmount(float)const;
    void getUnhappyCounter(void)const;
    void getSneezeCounter(void)const;
    void getRollAmount(float)const;
    void getRollCounter(void)const;
};
