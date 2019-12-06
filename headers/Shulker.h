#pragma once

class Shulker : Mob {

public:
    static long Shulker::COVERED_ARMOR_MODIFIER_UUID;
    static long Shulker::COVERED_ARMOR_MODIFIER;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~Shulker();
    virtual void setPos(Vec3 const&);
    virtual void normalTick(void);
    virtual bool isInWall(void)const;
    virtual void getShadowRadius(void)const;
    virtual bool canAttack(Actor *, bool)const;
    virtual void shouldRender(void)const;
    virtual bool isInvulnerableTo(ActorDamageSource const&)const;
    virtual void getPickRadius(void);
    virtual bool isLeashableType(void);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void travel(float, float, float);
    virtual void aiStep(void);
    virtual void getMaxHeadXRot(void);
    virtual void getArmorValue(void);
    virtual void useNewAi(void)const;
    virtual void initBodyControl(void);

    void Shulker(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getAttachFace(void)const;
    bool isValidAttach(BlockPos, unsigned char);
    void calculateBB(void);
    void setAttachFace(unsigned char);
    void setShulkerAttachPos(BlockPos);
    void getShulkerAttachPos(void)const;
    void getAttached(void)const;
    void setPeekAmount(int);
    void getPeekAmount(void)const;
    void teleportSomewhere(void);
    bool isClosed(void)const;
    void getClientPeekAmount(float)const;
    void getAttackAnimationTick(void)const;
    void getClientSideTeleportInterpolation(void)const;
    void getOldShulkerAttachPosition(void)const;
    void getMaxHeadYRot(void)const;
    bool hasValidInterpolationPositions(void)const;
};
