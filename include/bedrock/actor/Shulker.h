#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../../unmapped/DataLoadHelper.h"


class Shulker : Mob {

public:
    static long COVERED_ARMOR_MODIFIER_UUID;
    static long COVERED_ARMOR_MODIFIER;

    virtual void _onSizeUpdated();
    virtual void useNewAi()const;
    virtual bool isInWall()const;
    virtual void setPos(Vec3 const&);
    virtual void shouldRender()const;
    virtual void travel(float, float, float);
    virtual void normalTick();
    virtual void getShadowRadius()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void initBodyControl();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool canAttack(Actor *, bool)const;
    virtual void getPickRadius();
    virtual void addAdditionalSaveData(CompoundTag &);
    ~Shulker();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual bool isLeashableType();
    virtual void aiStep();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void getMaxHeadXRot();
    virtual void getArmorValue();
    void setAttachFace(unsigned char);
    void setPeekAmount(int);
    void getAttackAnimationTick()const;
    void getAttached()const;
    bool isClosed()const;
    void teleportSomewhere();
    void getClientPeekAmount(float)const;
    void getPeekAmount()const;
    Shulker(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setShulkerAttachPos(BlockPos);
    void getAttachFace()const;
    void calculateBB();
    void getClientSideTeleportInterpolation()const;
    void getOldShulkerAttachPosition()const;
    void getMaxHeadYRot()const;
    void getShulkerAttachPos()const;
    bool hasValidInterpolationPositions()const;
    bool isValidAttach(BlockPos, unsigned char);
};
