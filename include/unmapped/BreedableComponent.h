#pragma once



class BreedableComponent {

public:
    void _meetsEnvironmentRequirements(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void setLoveTimer(int);
    BreedableComponent(BreedableComponent &&);
    bool canMate(Actor const&, Actor const&)const;
    void getLoveTimer()const;
    void getBreedCooldown()const;
    void mate(Actor &, Actor &);
    void decrementLoveTimer();
    void resetLove(Actor &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAdditionalSaveData(CompoundTag &);
    void _handleMate(Actor &, Actor &);
    void decrementBreedCooldown();
    BreedableComponent();
    void getLoveCause(Actor const&)const;
    void _handlePregnancy(Actor &, Actor &);
    void setInLove(Actor &, Player const*);
};
