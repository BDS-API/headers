#pragma once

#include "Player.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../../unmapped/RenderParams.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorInteraction.h"
#include "damagesource/ActorDamageSource.h"
#include "../item/ItemStack.h"
#include "Mob.h"
#include "../../unmapped/DataLoadHelper.h"


class ArmorStand : Mob {

public:
    class Pose;

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

    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void pushActors();
    virtual void interactPreventDefault();
    ~ArmorStand();
    virtual void normalTick();
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void getShadowRadius()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual bool isPickable();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    void _readPose(CompoundTag const*);
    void _destroyWithEffects(Vec3 const&);
    void _defineEntityData();
    void getRightItemPose()const;
    void _hurtByProjectile(Actor const&);
    void _causeDamage(float);
//  void _trySwapItem(Player &, EquipmentSlot); //TODO: incomplete function definition
    ArmorStand(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _updateEntityBodyRotation();
    void _updatePoseFromSynchedData();
    void getBodyPose()const;
    void _setBit(char &, int, bool);
    void getHeadPose()const;
    void _dropHeldItemsAndResource();
    void _dropItem(ItemStack const&);
    void _dropHeldItems();
    void getLeftArmPose()const;
    void getRightLegPose()const;
    void getRightArmPose()const;
    void getPoseIndex()const;
//  void _rotateLimb(ArmorSlot); //TODO: incomplete function definition
    void getLeftLegPose()const;
    void setPoseIndex(int);
    void _writePose()const;
    void getNumSlotsFilled()const;
    class Pose {

    public:
        Pose(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&);
        Pose();
    };
};
