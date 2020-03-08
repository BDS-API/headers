#pragma once

#include "../../level/Level"
#include "../../actor/Player"
#include "../../actor/Actor"
#include "../../util/BlockPos"
#include "../../../unmapped/NewBlockID"
#include "../../../unmapped/Block"


class BlockEventListener {

public:
    BlockEventListener::~BlockEventListener()
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
