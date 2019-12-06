#pragma once

class LeashFenceKnotActor : HangingActor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~LeashFenceKnotActor();
    virtual void remove(void);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated(void);
    virtual void setDir(int);
    virtual void getWidth(void)const;
    virtual void getHeight(void)const;
    virtual void dropItem(void);
    virtual void wouldSurvive(BlockSource &);

    void LeashFenceKnotActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shouldRenderAtSqrDistance(double);
    void removeAnimals(Player *);
    void numberofAnimalsAttached(void);
    void recalculateBoundingBox(void);
};
