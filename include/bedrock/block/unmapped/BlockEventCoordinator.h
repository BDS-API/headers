#pragma once

#include <string>


class BlockEventCoordinator {

public:
    void sendBlockExploded(BlockPos const&, Block const&, Actor *);
//  void sendBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    void sendBlockModified(BlockPos const&, Block const&, Block const&);
    void sendBlockDestructionStarted(Player &, BlockPos const&);
    BlockEventCoordinator();
    void sendBlockDestructionStopped(Player &, BlockPos const&, int);
    void sendBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    void sendBlockInteractedWith(Player &, BlockPos const&);
    void sendBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    void sendUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    ~BlockEventCoordinator();
};
