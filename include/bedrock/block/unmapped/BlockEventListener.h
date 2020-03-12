#pragma once

#include <string>


class BlockEventListener {

public:
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    ~BlockEventListener();
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    BlockEventListener();
};
