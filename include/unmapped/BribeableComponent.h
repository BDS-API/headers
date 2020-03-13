#pragma once



class BribeableComponent {

public:
    BribeableComponent(BribeableComponent &&); // _ZN18BribeableComponentC2EOS_
    BribeableComponent(); // _ZN18BribeableComponentC2Ev
    void clientBribeCheck(Actor &); // _ZN18BribeableComponent16clientBribeCheckER5Actor
    void setBribed(Actor &); // _ZN18BribeableComponent9setBribedER5Actor
    void resetBribe(Actor &); // _ZN18BribeableComponent10resetBribeER5Actor
    void getBribeTimer(); // _ZN18BribeableComponent13getBribeTimerEv
    void getBribeCooldown(); // _ZN18BribeableComponent16getBribeCooldownEv
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN18BribeableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void addAdditionalSaveData(CompoundTag &); // _ZN18BribeableComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN18BribeableComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
};
