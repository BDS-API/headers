#pragma once

#include "../../../unmapped/Block.h"
#include "../../actor/Actor.h"
#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/NewBlockID.h"
#include <string>


class BlockEventListener {

public:
    virtual ~BlockEventListener();
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&);
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);

    BlockEventListener();
};
