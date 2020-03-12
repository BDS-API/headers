#pragma once

#include "Mob.h"
#include "../util/BlockPos.h"


class Shulker : Mob {

public:
    static long COVERED_ARMOR_MODIFIER_UUID;
    static long COVERED_ARMOR_MODIFIER;

    virtual void updateEntitySpecificMolangVariables(RenderParams &);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void travel(float, float, float);
    virtual void initBodyControl();
    virtual void setPos(Vec3 const&);
    virtual void getMaxHeadXRot();
    virtual void normalTick();
    virtual void getArmorValue();
    virtual void getPickRadius();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool isInWall()const;
    virtual void useNewAi()const;
    virtual void _onSizeUpdated();
    ~Shulker();
    virtual bool isLeashableType();
    virtual void shouldRender()const;
    virtual void aiStep();
    virtual void getShadowRadius()const;
    virtual bool canAttack(Actor *, bool)const;
    void teleportSomewhere();
    void setPeekAmount(int);
    void getMaxHeadYRot()const;
    bool isValidAttach(BlockPos, unsigned char);
    void getClientPeekAmount(float)const;
    void getPeekAmount()const;
    void getOldShulkerAttachPosition()const;
    void getClientSideTeleportInterpolation()const;
    void getAttached()const;
    bool isClosed()const;
    bool hasValidInterpolationPositions()const;
    Shulker(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setAttachFace(unsigned char);
    void getShulkerAttachPos()const;
    void calculateBB();
    void setShulkerAttachPos(BlockPos);
    void getAttachFace()const;
    void getAttackAnimationTick()const;
};
