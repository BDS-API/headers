#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "damagesource/ActorDamageSource.h"
#include "../item/ItemStack.h"
#include "Mob.h"


class Agent : Mob {

public:
    virtual bool canShowNameTag()const;
    virtual std::string getFormattedNameTag()const;
    virtual bool isAdventure()const;
    virtual bool isTargetable()const;
    virtual void setCarriedItem(ItemStack const&);
    virtual bool isWorldBuilder();
    virtual void normalTick();
    virtual bool isInvisible()const;
    virtual void aiStep();
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getAlwaysShowNameTag()const;
    virtual bool breaksFallingBlocks()const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    ~Agent();
    virtual bool canExistWhenDisallowMob()const;
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void initBodyControl();
    virtual bool isPickable();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void interactPreventDefault();
    virtual bool canBePulledIntoVehicle()const;
    virtual void kill();
    virtual void createAIGoals();
    virtual void travel(float, float, float);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    void swingAnimationCompleted();
    void startCommandMode();
    void setNameTagFromOwner(Player const&);
    Agent(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void roundTeleportPos(Vec3 const&);
    void tryFireCreateEvent(Player &);
    void getSwingAnimationDuration();
    void setMoveTarget(Vec3 const&);
    void getItemFromSlot(int);
    void swingArm();
    void getSelectedSlot()const;
    void getMoveSpeedScalar()const;
    bool isHovering();
    bool isValidSlotNum(int);
    void setIdling(bool);
    bool isIdling();
    void getRenderData();
    void _getContainerComponent();
    void stopCommandMode();
    void getSwingAnimationTick();
    void setSelectedSlot(int);
};
