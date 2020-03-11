#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "./Mob.h"
#include "../util/BlockPos.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class Shulker : Mob {

public:
    static long COVERED_ARMOR_MODIFIER_UUID;
    static long COVERED_ARMOR_MODIFIER;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~Shulker();
    virtual void setPos(Vec3 const&);
    virtual void normalTick();
    virtual bool isInWall()const;
    virtual void getShadowRadius()const;
    virtual bool canAttack(Actor *, bool)const;
    virtual void shouldRender()const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getPickRadius();
    virtual bool isLeashableType();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void travel(float, float, float);
    virtual void aiStep();
    virtual void getMaxHeadXRot();
    virtual void getArmorValue();
    virtual void useNewAi()const;
    virtual void initBodyControl();

    Shulker(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getAttachFace()const;
    bool isValidAttach(BlockPos, unsigned char);
    void calculateBB();
    void setAttachFace(unsigned char);
    void setShulkerAttachPos(BlockPos);
    void getShulkerAttachPos()const;
    void getAttached()const;
    void setPeekAmount(int);
    void getPeekAmount()const;
    void teleportSomewhere();
    bool isClosed()const;
    void getClientPeekAmount(float)const;
    void getAttackAnimationTick()const;
    void getClientSideTeleportInterpolation()const;
    void getOldShulkerAttachPosition()const;
    void getMaxHeadYRot()const;
    bool hasValidInterpolationPositions()const;
};
