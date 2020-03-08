#pragma once

#include "../../actor/Actor"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../actor/Player"
#include "../../../unmapped/NewBlockID"


class BlockEventListener {

public:
    virtual BlockEventListener::~BlockEventListener()
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&);
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);

    BlockEventListener(void);
};
