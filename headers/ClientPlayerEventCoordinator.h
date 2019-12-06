#pragma once

class ClientPlayerEventCoordinator {

public:

    void ClientPlayerEventCoordinator(void);
    void sendPlayerInput(Player &, MoveInputHandler &);
    void sendPlayerTurn(Player &, Vec2 &);
    void sendStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    void sendPlayerDestroyedBlock(Player &, BlockLegacy const&);
    void sendLocalPlayerDeath(IClientInstance &, LocalPlayer &);
    void sendLocalPlayerRespawn(IClientInstance &, LocalPlayer &);
    void sendPlayerStartRiding(Player &, Actor &);
    void sendPlayerStopRiding(Player &, bool, bool, bool);
    void sendPlayerCreated(LocalPlayer &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
};
