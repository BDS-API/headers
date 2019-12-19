#pragma once

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

    virtual ArmorStand::~ArmorStand();
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void interactPreventDefault(void);
    virtual bool isPickable(void);
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void pushActors(void);

    ArmorStand(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData(void);
    void _writePose(void)const;
    void _readPose(CompoundTag const*);
    void _dropHeldItems(void);
    void _causeDamage(float);
    void _destroyWithEffects(Vec3 const&);
    void _dropHeldItemsAndResource(void);
    void _hurtByProjectile(Actor const&);
    void _updateEntityBodyRotation(void);
    void getPoseIndex(void)const;
    void setPoseIndex(int);
    void _updatePoseFromSynchedData(void);
    void getNumSlotsFilled(void)const;
    void _setBit(char &, int, bool);
    void _trySwapItem(Player &, EquipmentSlot);
    void _rotateLimb(ArmorSlot);
    void _dropItem(ItemStack const&);
    void getHeadPose(void)const;
    void getBodyPose(void)const;
    void getRightArmPose(void)const;
    void getLeftArmPose(void)const;
    void getRightLegPose(void)const;
    void getLeftLegPose(void)const;
    void getRightItemPose(void)const;
};
