#pragma once



class ServerLevelEventCoordinator {

public:
    ~ServerLevelEventCoordinator(); // _ZN27ServerLevelEventCoordinatorD2Ev
    ServerLevelEventCoordinator(); // _ZN27ServerLevelEventCoordinatorC2Ev
    void sendLevelSaveData(Level &, CompoundTag &); // _ZN27ServerLevelEventCoordinator17sendLevelSaveDataER5LevelR11CompoundTag
    void sendLevelAddedPlayer(Level &, Player &); // _ZN27ServerLevelEventCoordinator20sendLevelAddedPlayerER5LevelR6Player
    void sendLevelRemovedPlayer(Level &, Player &); // _ZN27ServerLevelEventCoordinator22sendLevelRemovedPlayerER5LevelR6Player
};
