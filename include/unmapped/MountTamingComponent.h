#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"
#include "../bedrock/nbt/CompoundTag"


class MountTamingComponent {

public:

    MountTamingComponent(MountTamingComponent&&);
    void getTemper();
    void getCounter();
    void getWaitCount()const;
    void getTemperMod()const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void tameToPlayer(Actor &, Player *, bool);
    void _sendTameEvents(Actor &, Player *)const;
    void becomeTame(Actor &, bool);
};
