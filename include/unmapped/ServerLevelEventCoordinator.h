#pragma once

class ServerLevelEventCoordinator {

public:

    ServerLevelEventCoordinator(void);
    void sendLevelSaveData(Level &, CompoundTag &);
    void sendLevelAddedPlayer(Level &, Player &);
    void sendLevelRemovedPlayer(Level &, Player &);
};
