#pragma once

#include "../../unmapped/RenderParams.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../item/ItemStack.h"
#include "../nbt/CompoundTag.h"
#include "./Mob.h"
#include "damagesource/ActorDamageSource.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorInteraction.h"
#include "./Player.h"


class ArmorStand : Mob {

public:
    static long STAND_POSES;
    static long POSE_DEFAULT;
    static long POSE_ZERO_ROTATION;
    static long POSE_SOLEMN;
    static long POSE_ATHENA;
    static long POSE_BRANDISH;
    static long POSE_HONOR;
    static long POSE_ENTERTAIN;
    static long POSE_SALUTE;
    static long POSE_RIPOSTE;
    static long POSE_ZOMBIE;
    static long POSE_CANCAN_A;
    static long POSE_CANCAN_B;
    static long POSE_HERO;

    virtual ~ArmorStand();
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void interactPreventDefault();
    virtual bool isPickable();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void pushActors();

    ArmorStand(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData();
    void _writePose()const;
    void _readPose(CompoundTag const*);
    void _dropHeldItems();
    void _causeDamage(float);
    void _destroyWithEffects(Vec3 const&);
    void _dropHeldItemsAndResource();
    void _hurtByProjectile(Actor const&);
    void _updateEntityBodyRotation();
    void getPoseIndex()const;
    void setPoseIndex(int);
    void _updatePoseFromSynchedData();
    void getNumSlotsFilled()const;
    void _setBit(char &, int, bool);
//  void _trySwapItem(Player &, EquipmentSlot); //TODO: incomplete function definition
//  void _rotateLimb(ArmorSlot); //TODO: incomplete function definition
    void _dropItem(ItemStack const&);
    void getHeadPose()const;
    void getBodyPose()const;
    void getRightArmPose()const;
    void getLeftArmPose()const;
    void getRightLegPose()const;
    void getLeftLegPose()const;
    void getRightItemPose()const;
};
