#pragma once

#include "Mob.h"
#include <string>


class Agent : Mob {

public:
    virtual void aiStep();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getAlwaysShowNameTag()const;
    virtual bool isAdventure()const;
    virtual void travel(float, float, float);
    virtual void normalTick();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual bool isWorldBuilder();
    virtual void interactPreventDefault();
    virtual void kill();
    virtual void createAIGoals();
    virtual bool breaksFallingBlocks()const;
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isPickable();
    virtual bool canExistWhenDisallowMob()const;
    virtual bool isTargetable()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual bool canBePulledIntoVehicle()const;
    virtual void initBodyControl();
    ~Agent();
    virtual bool canShowNameTag()const;
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual bool isInvisible()const;
    virtual std::string getFormattedNameTag()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void setCarriedItem(ItemStack const&);
    void getMoveSpeedScalar()const;
    void setNameTagFromOwner(Player const&);
    void setSelectedSlot(int);
    void getSwingAnimationTick();
    void getRenderData();
    void setIdling(bool);
    void getItemFromSlot(int);
    void stopCommandMode();
    void setMoveTarget(Vec3 const&);
    void swingAnimationCompleted();
    void startCommandMode();
    Agent(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void roundTeleportPos(Vec3 const&);
    bool isHovering();
    void getSwingAnimationDuration();
    void getSelectedSlot()const;
    bool isValidSlotNum(int);
    void tryFireCreateEvent(Player &);
    bool isIdling();
    void _getContainerComponent();
    void swingArm();
};
