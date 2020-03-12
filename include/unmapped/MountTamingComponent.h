#pragma once



class MountTamingComponent {

public:
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getTemperMod()const;
    void getCounter();
    void _sendTameEvents(Actor &, Player *)const;
    void tameToPlayer(Actor &, Player *, bool);
    void getWaitCount()const;
    void addAdditionalSaveData(CompoundTag &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    MountTamingComponent(MountTamingComponent &&);
    void getTemper();
    void becomeTame(Actor &, bool);
};
