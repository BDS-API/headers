#pragma once



class MountTamingComponent {

public:
    MountTamingComponent(MountTamingComponent &&); // _ZN20MountTamingComponentC2EOS_
    void getTemper(); // _ZN20MountTamingComponent9getTemperEv
    void getCounter(); // _ZN20MountTamingComponent10getCounterEv
    void getWaitCount()const; // _ZNK20MountTamingComponent12getWaitCountEv
    void getTemperMod()const; // _ZNK20MountTamingComponent12getTemperModEv
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN20MountTamingComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
    void addAdditionalSaveData(CompoundTag &); // _ZN20MountTamingComponent21addAdditionalSaveDataER11CompoundTag
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &); // _ZN20MountTamingComponent22readAdditionalSaveDataER5ActorRK11CompoundTagR14DataLoadHelper
    void tameToPlayer(Actor &, Player *, bool); // _ZN20MountTamingComponent12tameToPlayerER5ActorP6Playerb
    void _sendTameEvents(Actor &, Player *)const; // _ZNK20MountTamingComponent15_sendTameEventsER5ActorP6Player
    void becomeTame(Actor &, bool); // _ZN20MountTamingComponent10becomeTameER5Actorb
};
