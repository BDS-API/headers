#pragma once

#include <string>
#include "Mob.h"


class Agent : Mob {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN5Agent20initializeComponentsEN5Actor20InitializationMethodERK20VariantParameterList
    ~Agent(); // _ZN5AgentD2Ev
    virtual bool breaksFallingBlocks()const; // _ZNK5Agent19breaksFallingBlocksEv
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN5Agent10teleportToERK4Vec3bii
    virtual void normalTick(); // _ZN5Agent10normalTickEv
    virtual bool isInvisible()const; // _ZNK5Agent11isInvisibleEv
    virtual bool canShowNameTag()const; // _ZNK5Agent14canShowNameTagEv
    virtual std::string getFormattedNameTag()const; // _ZNK5Agent19getFormattedNameTagB5cxx11Ev
    virtual void getAlwaysShowNameTag()const; // _ZNK5Agent20getAlwaysShowNameTagEv
    virtual void interactPreventDefault(); // _ZN5Agent22interactPreventDefaultEv
    virtual bool isPickable(); // _ZN5Agent10isPickableEv
    virtual bool isTargetable()const; // _ZNK5Agent12isTargetableEv
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN5Agent17handleEntityEventE10ActorEventi
    virtual void setCarriedItem(ItemStack const&); // _ZN5Agent14setCarriedItemERK9ItemStack
    virtual bool canBePulledIntoVehicle()const; // _ZNK5Agent22canBePulledIntoVehicleEv
    virtual bool isWorldBuilder(); // _ZN5Agent14isWorldBuilderEv
    virtual bool isAdventure()const; // _ZNK5Agent11isAdventureEv
    virtual void kill(); // _ZN5Agent4killEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN5Agent35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN5Agent5_hurtERK17ActorDamageSourceibb
    virtual void knockback(Actor *, int, float, float, float, float, float); // _ZN5Agent9knockbackEP5Actorifffff
    virtual void travel(float, float, float); // _ZN5Agent6travelEfff
    virtual void aiStep(); // _ZN5Agent6aiStepEv
    virtual void createAIGoals(); // _ZN5Agent13createAIGoalsEv
    virtual bool canExistWhenDisallowMob()const; // _ZNK5Agent23canExistWhenDisallowMobEv
    virtual void initBodyControl(); // _ZN5Agent15initBodyControlEv
    Agent(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN5AgentC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setIdling(bool); // _ZN5Agent9setIdlingEb
    void getSelectedSlot()const; // _ZNK5Agent15getSelectedSlotEv
    void setSelectedSlot(int); // _ZN5Agent15setSelectedSlotEi
    void getItemFromSlot(int); // _ZN5Agent15getItemFromSlotEi
    void _getContainerComponent(); // _ZN5Agent22_getContainerComponentEv
    bool isValidSlotNum(int); // _ZN5Agent14isValidSlotNumEi
    void tryFireCreateEvent(Player &); // _ZN5Agent18tryFireCreateEventER6Player
    void setMoveTarget(Vec3 const&); // _ZN5Agent13setMoveTargetERK4Vec3
    void setNameTagFromOwner(Player const&); // _ZN5Agent19setNameTagFromOwnerERK6Player
    void getSwingAnimationTick(); // _ZN5Agent21getSwingAnimationTickEv
    void getSwingAnimationDuration(); // _ZN5Agent25getSwingAnimationDurationEv
    void getMoveSpeedScalar()const; // _ZNK5Agent18getMoveSpeedScalarEv
    void swingArm(); // _ZN5Agent8swingArmEv
    void swingAnimationCompleted(); // _ZN5Agent23swingAnimationCompletedEv
    void roundTeleportPos(Vec3 const&); // _ZN5Agent16roundTeleportPosERK4Vec3
    void startCommandMode(); // _ZN5Agent16startCommandModeEv
    void stopCommandMode(); // _ZN5Agent15stopCommandModeEv
    bool isHovering(); // _ZN5Agent10isHoveringEv
    bool isIdling(); // _ZN5Agent8isIdlingEv
    void getRenderData(); // _ZN5Agent13getRenderDataEv
};
