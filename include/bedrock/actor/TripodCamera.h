#pragma once

#include "Mob.h"


class TripodCamera : Mob {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN12TripodCamera15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~TripodCamera(); // _ZN12TripodCameraD2Ev
    virtual void remove(); // _ZN12TripodCamera6removeEv
    virtual bool breaksFallingBlocks()const; // _ZNK12TripodCamera19breaksFallingBlocksEv
    virtual void normalTick(); // _ZN12TripodCamera10normalTickEv
    virtual void getShadowHeightOffs(); // _ZN12TripodCamera19getShadowHeightOffsEv
    virtual void getShadowRadius()const; // _ZNK12TripodCamera15getShadowRadiusEv
    virtual void interactPreventDefault(); // _ZN12TripodCamera22interactPreventDefaultEv
    virtual bool isPickable(); // _ZN12TripodCamera10isPickableEv
    virtual bool isTargetable()const; // _ZNK12TripodCamera12isTargetableEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN12TripodCamera35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN12TripodCamera5_hurtERK17ActorDamageSourceibb
    virtual bool canExistWhenDisallowMob()const; // _ZNK12TripodCamera23canExistWhenDisallowMobEv
    TripodCamera(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN12TripodCameraC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setPlayerOwner(Player *); // _ZN12TripodCamera14setPlayerOwnerEP6Player
    void interactWithPlayer(Player &); // _ZN12TripodCamera18interactWithPlayerER6Player
    void startTakingPicture(Player &); // _ZN12TripodCamera18startTakingPictureER6Player
    bool isActivated()const; // _ZNK12TripodCamera11isActivatedEv
    void getCountdown()const; // _ZNK12TripodCamera12getCountdownEv
};
