#pragma once

class BlockEventCoordinator {

public:

    void sendBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    void sendBlockDestroyedByPlayer(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&);
    void sendBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    void sendBlockDestructionStopped(Player &, BlockPos const&, int);
    void sendBlockDestructionStarted(Player &, BlockPos const&);
    void sendBlockInteractedWith(Player &, BlockPos const&);
    void sendBlockExploded(BlockPos const&, Block const&, Actor *);
    void sendBlockModified(BlockPos const&, Block const&, Block const&);
    void sendUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    void BlockEventCoordinator(void);
};
