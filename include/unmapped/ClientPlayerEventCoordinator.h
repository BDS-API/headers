#pragma once

#include <string>


class ClientPlayerEventCoordinator {

public:
    ~ClientPlayerEventCoordinator(); // _ZN28ClientPlayerEventCoordinatorD2Ev
    ClientPlayerEventCoordinator(); // _ZN28ClientPlayerEventCoordinatorC2Ev
    void sendPlayerInput(Player &, MoveInputHandler &); // _ZN28ClientPlayerEventCoordinator15sendPlayerInputER6PlayerR16MoveInputHandler
    void sendPlayerTurn(Player &, Vec2 &); // _ZN28ClientPlayerEventCoordinator14sendPlayerTurnER6PlayerR4Vec2
    void sendStartDestroyBlock(Player &, BlockPos const&, unsigned char &); // _ZN28ClientPlayerEventCoordinator21sendStartDestroyBlockER6PlayerRK8BlockPosRh
    void sendPlayerDestroyedBlock(Player &, BlockLegacy const&); // _ZN28ClientPlayerEventCoordinator24sendPlayerDestroyedBlockER6PlayerRK11BlockLegacy
//  void sendLocalPlayerDeath(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition // _ZN28ClientPlayerEventCoordinator20sendLocalPlayerDeathER15IClientInstanceR11LocalPlayer
//  void sendLocalPlayerRespawn(IClientInstance &, LocalPlayer &); //TODO: incomplete function definition // _ZN28ClientPlayerEventCoordinator22sendLocalPlayerRespawnER15IClientInstanceR11LocalPlayer
    void sendPlayerStartRiding(Player &, Actor &); // _ZN28ClientPlayerEventCoordinator21sendPlayerStartRidingER6PlayerR5Actor
    void sendPlayerStopRiding(Player &, bool, bool, bool); // _ZN28ClientPlayerEventCoordinator20sendPlayerStopRidingER6Playerbbb
//  void sendPlayerCreated(LocalPlayer &, std::string const&, std::string const&, bool); //TODO: incomplete function definition // _ZN28ClientPlayerEventCoordinator17sendPlayerCreatedER11LocalPlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_b
};
