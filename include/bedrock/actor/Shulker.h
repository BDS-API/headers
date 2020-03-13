#pragma once

#include "Mob.h"
#include "../util/BlockPos.h"


class Shulker : Mob {

public:
    static long COVERED_ARMOR_MODIFIER_UUID;
    static long COVERED_ARMOR_MODIFIER;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN7Shulker15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~Shulker(); // _ZN7ShulkerD2Ev
    virtual void setPos(Vec3 const&); // _ZN7Shulker6setPosERK4Vec3
    virtual void normalTick(); // _ZN7Shulker10normalTickEv
    virtual bool isInWall()const; // _ZNK7Shulker8isInWallEv
    virtual void getShadowRadius()const; // _ZNK7Shulker15getShadowRadiusEv
    virtual bool canAttack(Actor *, bool)const; // _ZNK7Shulker9canAttackEP5Actorb
    virtual void shouldRender()const; // _ZNK7Shulker12shouldRenderEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK7Shulker16isInvulnerableToERK17ActorDamageSource
    virtual void getPickRadius(); // _ZN7Shulker13getPickRadiusEv
    virtual bool isLeashableType(); // _ZN7Shulker15isLeashableTypeEv
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN7Shulker35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN7Shulker5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN7Shulker22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN7Shulker21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN7Shulker14_onSizeUpdatedEv
    virtual void travel(float, float, float); // _ZN7Shulker6travelEfff
    virtual void aiStep(); // _ZN7Shulker6aiStepEv
    virtual void getMaxHeadXRot(); // _ZN7Shulker14getMaxHeadXRotEv
    virtual void getArmorValue(); // _ZN7Shulker13getArmorValueEv
    virtual void useNewAi()const; // _ZNK7Shulker8useNewAiEv
    virtual void initBodyControl(); // _ZN7Shulker15initBodyControlEv
    Shulker(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN7ShulkerC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getAttachFace()const; // _ZNK7Shulker13getAttachFaceEv
    bool isValidAttach(BlockPos, unsigned char); // _ZN7Shulker13isValidAttachE8BlockPosh
    void calculateBB(); // _ZN7Shulker11calculateBBEv
    void setAttachFace(unsigned char); // _ZN7Shulker13setAttachFaceEh
    void setShulkerAttachPos(BlockPos); // _ZN7Shulker19setShulkerAttachPosE8BlockPos
    void getShulkerAttachPos()const; // _ZNK7Shulker19getShulkerAttachPosEv
    void getAttached()const; // _ZNK7Shulker11getAttachedEv
    void setPeekAmount(int); // _ZN7Shulker13setPeekAmountEi
    void getPeekAmount()const; // _ZNK7Shulker13getPeekAmountEv
    void teleportSomewhere(); // _ZN7Shulker17teleportSomewhereEv
    bool isClosed()const; // _ZNK7Shulker8isClosedEv
    void getClientPeekAmount(float)const; // _ZNK7Shulker19getClientPeekAmountEf
    void getAttackAnimationTick()const; // _ZNK7Shulker22getAttackAnimationTickEv
    void getClientSideTeleportInterpolation()const; // _ZNK7Shulker34getClientSideTeleportInterpolationEv
    void getOldShulkerAttachPosition()const; // _ZNK7Shulker27getOldShulkerAttachPositionEv
    void getMaxHeadYRot()const; // _ZNK7Shulker14getMaxHeadYRotEv
    bool hasValidInterpolationPositions()const; // _ZNK7Shulker30hasValidInterpolationPositionsEv
};
