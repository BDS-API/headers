#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/level/Level.h"
#include "../bedrock/nbt/CompoundTag.h"


class ServerLevelEventCoordinator {

public:
    ServerLevelEventCoordinator();
    void sendLevelRemovedPlayer(Level &, Player &);
    ~ServerLevelEventCoordinator();
    void sendLevelSaveData(Level &, CompoundTag &);
    void sendLevelAddedPlayer(Level &, Player &);
};
