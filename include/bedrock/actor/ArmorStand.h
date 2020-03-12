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

    virtual void getShadowRadius()const;
    virtual void pushActors();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual bool isPickable();
    virtual void interactPreventDefault();
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    ~ArmorStand();
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void normalTick();
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    void getBodyPose()const;
    void _setBit(char &, int, bool);
    void _dropHeldItems();
    void getRightItemPose()const;
    void _defineEntityData();
    void _destroyWithEffects(Vec3 const&);
    void _readPose(CompoundTag const*);
    void _updateEntityBodyRotation();
    void _dropItem(ItemStack const&);
    void _writePose()const;
    void _dropHeldItemsAndResource();
    void getPoseIndex()const;
    void getLeftArmPose()const;
    void _updatePoseFromSynchedData();
    void getRightArmPose()const;
    ArmorStand(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getHeadPose()const;
    void getLeftLegPose()const;
//  void _rotateLimb(ArmorSlot); //TODO: incomplete function definition
    void getRightLegPose()const;
    void _hurtByProjectile(Actor const&);
    void setPoseIndex(int);
    void getNumSlotsFilled()const;
    void _causeDamage(float);
//  void _trySwapItem(Player &, EquipmentSlot); //TODO: incomplete function definition
    class Pose {

    public:
        Pose();
        Pose(Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&, Vec3 const&);
    };
};
