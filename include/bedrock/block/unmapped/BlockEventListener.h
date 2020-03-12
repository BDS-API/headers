#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/NewBlockID.h"


class BlockEventListener {

public:
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&);
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    ~BlockEventListener();
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    BlockEventListener();
};
