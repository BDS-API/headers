#pragma once



class BreedableComponent {

public:
    BreedableComponent(BreedableComponent &&); // _ZN18BreedableComponentC2EOS_
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN18BreedableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void _meetsEnvironmentRequirements(Actor &); // _ZN18BreedableComponent29_meetsEnvironmentRequirementsER5Actor
    bool canMate(Actor const&, Actor const&)const; // _ZNK18BreedableComponent7canMateERK5ActorS2_
    void mate(Actor &, Actor &); // _ZN18BreedableComponent4mateER5ActorS1_
    void _handlePregnancy(Actor &, Actor &); // _ZN18BreedableComponent16_handlePregnancyER5ActorS1_
    void _handleMate(Actor &, Actor &); // _ZN18BreedableComponent11_handleMateER5ActorS1_
    void setInLove(Actor &, Player const*); // _ZN18BreedableComponent9setInLoveER5ActorPK6Player
    void getLoveTimer()const; // _ZNK18BreedableComponent12getLoveTimerEv
    void setLoveTimer(int); // _ZN18BreedableComponent12setLoveTimerEi
    void decrementLoveTimer(); // _ZN18BreedableComponent18decrementLoveTimerEv
    void getBreedCooldown()const; // _ZNK18BreedableComponent16getBreedCooldownEv
    void decrementBreedCooldown(); // _ZN18BreedableComponent22decrementBreedCooldownEv
    void resetLove(Actor &); // _ZN18BreedableComponent9resetLoveER5Actor
    void getLoveCause(Actor const&)const; // _ZNK18BreedableComponent12getLoveCauseERK5Actor
    void addAdditionalSaveData(CompoundTag &); // _ZN18BreedableComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN18BreedableComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    BreedableComponent(); // _ZN18BreedableComponentC2Ev
};
