#pragma once

class Bee : Animal {

public:
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Bee();
    virtual void normalTick(void);
    virtual void onSynchedDataUpdate(int);
    virtual void getAmbientSoundPostponeTicks(void);

    void Bee(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _registerLoopingSounds(void);
};
