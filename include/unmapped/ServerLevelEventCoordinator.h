#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/Level"


class ServerLevelEventCoordinator {

public:

    ServerLevelEventCoordinator(void);
    void sendLevelSaveData(Level &, CompoundTag &);
    void sendLevelAddedPlayer(Level &, Player &);
    void sendLevelRemovedPlayer(Level &, Player &);
};
