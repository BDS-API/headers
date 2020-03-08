#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "../../unmapped/Vec3"


class AbstractArrow : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual AbstractArrow::~AbstractArrow();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick(void);
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual void playerTouch(Player &);
    virtual void getSourceUniqueID(void)const;
    virtual bool canChangeDimensions(void)const;
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void shoot(Vec3 const&, float, float, Vec3 const&);
    virtual void _playPickupSound(void);

    AbstractArrow(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _defineEntityData(void);
    void _canPickup(Player const&)const;
    void setBaseDamage(float);
    void getBaseDamage(void);
    void setIsPlayerOwned(bool);
    void setIsCreative(bool);
    void setFavoredSlot(int);
    void _isPlayerOwned(void)const;
};
