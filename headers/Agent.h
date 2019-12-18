#pragma once

class Agent : Mob {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Agent();
    virtual void breaksFallingBlocks(void)const;
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void normalTick(void);
    virtual bool isInvisible(void)const;
    virtual bool canShowNameTag(void)const;
    virtual void getFormattedNameTag[abi:cxx11](void)const;
    virtual void getAlwaysShowNameTag(void)const;
    virtual void interactPreventDefault(void);
    virtual bool isPickable(void);
    virtual bool isTargetable(void)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void setCarriedItem(ItemStack const&);
    virtual bool canBePulledIntoVehicle(void)const;
    virtual bool isWorldBuilder(void);
    virtual bool isAdventure(void)const;
    virtual void kill(void);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void travel(float, float, float);
    virtual void aiStep(void);
    virtual void createAIGoals(void);
    virtual bool canExistWhenDisallowMob(void)const;
    virtual void initBodyControl(void);

    void Agent(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setIdling(bool);
    void getSelectedSlot(void)const;
    void setSelectedSlot(int);
    void getItemFromSlot(int);
    void _getContainerComponent(void);
    bool isValidSlotNum(int);
    void tryFireCreateEvent(Player &);
    void setMoveTarget(Vec3 const&);
    void setNameTagFromOwner(Player const&);
    void getSwingAnimationTick(void);
    void getSwingAnimationDuration(void);
    void getMoveSpeedScalar(void)const;
    void swingArm(void);
    void swingAnimationCompleted(void);
    void roundTeleportPos(Vec3 const&);
    void startCommandMode(void);
    void stopCommandMode(void);
    bool isHovering(void);
    bool isIdling(void);
    void getRenderData(void);
};
