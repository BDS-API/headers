#pragma once

#include "HumanoidMonster.h"


class EvocationIllager : public HumanoidMonster {

public:
    virtual void reloadHardcoded__incomplete0(long, VariantParameterList const&); //TODO: incomplete function definition // _ZN16EvocationIllager15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    virtual ~EvocationIllager(); // _ZN16EvocationIllagerD2Ev
    virtual void __fake_function0(); // fake
    virtual void getRidingHeight(); // _ZN16EvocationIllager15getRidingHeightEv
    virtual bool canExistInPeaceful()const; // _ZNK16EvocationIllager18canExistInPeacefulEv
    virtual void die(ActorDamageSource const&); // _ZN16EvocationIllager3dieERK17ActorDamageSource
    virtual void aiStep(); // _ZN16EvocationIllager6aiStepEv
    virtual bool isAlliedTo(Mob *); // _ZN16EvocationIllager10isAlliedToEP3Mob
    virtual void getArmorValue(); // _ZN16EvocationIllager13getArmorValueEv
    virtual void useNewAi()const; // _ZNK16EvocationIllager8useNewAiEv
    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN16EvocationIllagerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
