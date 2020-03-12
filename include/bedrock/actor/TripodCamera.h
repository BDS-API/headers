#pragma once

#include "Mob.h"


class TripodCamera : Mob {

public:
    virtual void remove();
    virtual bool isPickable();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    ~TripodCamera();
    virtual void interactPreventDefault();
    virtual void getShadowRadius()const;
    virtual void getShadowHeightOffs();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual bool canExistWhenDisallowMob()const;
    virtual void normalTick();
    virtual bool isTargetable()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool breaksFallingBlocks()const;
    void interactWithPlayer(Player &);
    bool isActivated()const;
    void setPlayerOwner(Player *);
    void getCountdown()const;
    void startTakingPicture(Player &);
    TripodCamera(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
