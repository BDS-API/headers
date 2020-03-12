#pragma once



class ServerLevelEventCoordinator {

public:
    ~ServerLevelEventCoordinator();
    void sendLevelRemovedPlayer(Level &, Player &);
    void sendLevelAddedPlayer(Level &, Player &);
    ServerLevelEventCoordinator();
    void sendLevelSaveData(Level &, CompoundTag &);
};
