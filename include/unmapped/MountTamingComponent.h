#pragma once

#include "./MountTamingComponent.h"
#include "./DataLoadHelper.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class MountTamingComponent {

public:

    MountTamingComponent(MountTamingComponent &&);
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
