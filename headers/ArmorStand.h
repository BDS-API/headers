#pragma once

class ArmorStand : Mob {

public:
    static long ArmorStand::STAND_POSES;
    static long ArmorStand::POSE_DEFAULT;
    static long ArmorStand::POSE_ZERO_ROTATION;
    static long ArmorStand::POSE_SOLEMN;
    static long ArmorStand::POSE_ATHENA;
    static long ArmorStand::POSE_BRANDISH;
    static long ArmorStand::POSE_HONOR;
    static long ArmorStand::POSE_ENTERTAIN;
    static long ArmorStand::POSE_SALUTE;
    static long ArmorStand::POSE_RIPOSTE;
    static long ArmorStand::POSE_ZOMBIE;
    static long ArmorStand::POSE_CANCAN_A;
    static long ArmorStand::POSE_CANCAN_B;
    static long ArmorStand::POSE_HERO;

    virtual ~ArmorStand();
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

    void ArmorStand(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
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
