#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "../../unmapped/RenderParams"
#include "unmapped/ActorDefinitionIdentifier"


class TripodCamera : Mob {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    TripodCamera::~TripodCamera()
    virtual void remove();
    virtual bool breaksFallingBlocks()const;
    virtual void normalTick();
    virtual void getShadowHeightOffs();
    virtual void getShadowRadius()const;
    virtual void interactPreventDefault();
    virtual bool isPickable();
    virtual bool isTargetable()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool canExistWhenDisallowMob()const;

    TripodCamera(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setPlayerOwner(Player *);
    void interactWithPlayer(Player &);
    void startTakingPicture(Player &);
    bool isActivated()const;
    void getCountdown()const;
};
