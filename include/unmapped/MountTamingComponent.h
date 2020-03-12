#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "DataLoadHelper.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class MountTamingComponent {

public:
    void tameToPlayer(Actor &, Player *, bool);
    void becomeTame(Actor &, bool);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getTemper();
    MountTamingComponent(MountTamingComponent &&);
    void addAdditionalSaveData(CompoundTag &);
    void getCounter();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void getWaitCount()const;
    void getTemperMod()const;
    void _sendTameEvents(Actor &, Player *)const;
};
