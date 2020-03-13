#pragma once

#include "Mob.h"


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

    ~ArmorStand(); // _ZN10ArmorStandD2Ev
    virtual void normalTick(); // _ZN10ArmorStand10normalTickEv
    virtual void getShadowRadius()const; // _ZNK10ArmorStand15getShadowRadiusEv
    virtual void interactPreventDefault(); // _ZN10ArmorStand22interactPreventDefaultEv
    virtual bool isPickable(); // _ZN10ArmorStand10isPickableEv
    virtual bool isInvulnerableTo(ActorDamageSource const&)const; // _ZNK10ArmorStand16isInvulnerableToERK17ActorDamageSource
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&); // _ZN10ArmorStand14getInteractionER6PlayerR16ActorInteractionRK4Vec3
    virtual void updateEntitySpecificMolangVariables(RenderParams &); // _ZN10ArmorStand35updateEntitySpecificMolangVariablesER12RenderParams
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN10ArmorStand5_hurtERK17ActorDamageSourceibb
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN10ArmorStand22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN10ArmorStand21addAdditionalSaveDataER11CompoundTag
    virtual void pushActors(); // _ZN10ArmorStand10pushActorsEv
    ArmorStand(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN10ArmorStandC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void _defineEntityData(); // _ZN10ArmorStand17_defineEntityDataEv
    void _writePose()const; // _ZNK10ArmorStand10_writePoseEv
    void _readPose(CompoundTag const*); // _ZN10ArmorStand9_readPoseEPK11CompoundTag
    void _dropHeldItems(); // _ZN10ArmorStand14_dropHeldItemsEv
    void _causeDamage(float); // _ZN10ArmorStand12_causeDamageEf
    void _destroyWithEffects(Vec3 const&); // _ZN10ArmorStand19_destroyWithEffectsERK4Vec3
    void _dropHeldItemsAndResource(); // _ZN10ArmorStand25_dropHeldItemsAndResourceEv
    void _hurtByProjectile(Actor const&); // _ZN10ArmorStand17_hurtByProjectileERK5Actor
    void _updateEntityBodyRotation(); // _ZN10ArmorStand25_updateEntityBodyRotationEv
    void getPoseIndex()const; // _ZNK10ArmorStand12getPoseIndexEv
    void setPoseIndex(int); // _ZN10ArmorStand12setPoseIndexEi
    void _updatePoseFromSynchedData(); // _ZN10ArmorStand26_updatePoseFromSynchedDataEv
    void getNumSlotsFilled()const; // _ZNK10ArmorStand17getNumSlotsFilledEv
    void _setBit(char &, int, bool); // _ZN10ArmorStand7_setBitERcib
//  void _trySwapItem(Player &, EquipmentSlot); //TODO: incomplete function definition // _ZN10ArmorStand12_trySwapItemER6Player13EquipmentSlot
//  void _rotateLimb(ArmorSlot); //TODO: incomplete function definition // _ZN10ArmorStand11_rotateLimbE9ArmorSlot
    void _dropItem(ItemStack const&); // _ZN10ArmorStand9_dropItemERK9ItemStack
    void getHeadPose()const; // _ZNK10ArmorStand11getHeadPoseEv
    void getBodyPose()const; // _ZNK10ArmorStand11getBodyPoseEv
    void getRightArmPose()const; // _ZNK10ArmorStand15getRightArmPoseEv
    void getLeftArmPose()const; // _ZNK10ArmorStand14getLeftArmPoseEv
    void getRightLegPose()const; // _ZNK10ArmorStand15getRightLegPoseEv
    void getLeftLegPose()const; // _ZNK10ArmorStand14getLeftLegPoseEv
    void getRightItemPose()const; // _ZNK10ArmorStand16getRightItemPoseEv
    class Pose {

    public:
        Pose(); // _ZN10ArmorStand4PoseC2Ev
        Pose(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&); // _ZN10ArmorStand4PoseC2ERK4Vec3S3_S3_S3_S3_S3_S3_
    };
};
