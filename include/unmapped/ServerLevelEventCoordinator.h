#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"


class ServerLevelEventCoordinator {

public:

    ~ServerLevelEventCoordinator();
    ServerLevelEventCoordinator();
    void sendLevelSaveData(Level &, CompoundTag &);
    void sendLevelAddedPlayer(Level &, Player &);
    void sendLevelRemovedPlayer(Level &, Player &);
};
