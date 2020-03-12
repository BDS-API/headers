#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class TripodCamera : Mob {

public:
    virtual void remove();
    ~TripodCamera();
    virtual bool canExistWhenDisallowMob()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void normalTick();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool breaksFallingBlocks()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isTargetable()const;
    virtual bool isPickable();
    virtual void getShadowRadius()const;
    virtual void getShadowHeightOffs();
    virtual void interactPreventDefault();
    bool isActivated()const;
    void getCountdown()const;
    TripodCamera(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void startTakingPicture(Player &);
    void interactWithPlayer(Player &);
    void setPlayerOwner(Player *);
};
