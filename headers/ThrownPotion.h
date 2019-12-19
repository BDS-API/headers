#pragma once

class ThrownPotion : Throwable {

public:
    static long SPLASH_RANGE;

    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ~ThrownPotion();
    virtual void queryEntityRenderer(void)const;
    virtual void setAuxValue(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);

    void ThrownPotion(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isLinger(void)const;
    void setLinger(bool);
    void getPotionId(void)const;
    void init(short);
};
