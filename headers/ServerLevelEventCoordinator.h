#pragma once

class ServerLevelEventCoordinator {

public:

    void ServerLevelEventCoordinator(void);
    void sendLevelSaveData(Level &, CompoundTag &);
    void sendLevelAddedPlayer(Level &, Player &);
    void sendLevelRemovedPlayer(Level &, Player &);
};
