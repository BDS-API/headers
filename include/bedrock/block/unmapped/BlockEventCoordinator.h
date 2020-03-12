#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/NewBlockID.h"


class BlockEventCoordinator {

public:
    void sendBlockDestructionStopped(Player &, BlockPos const&, int);
    void sendBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    void sendBlockModified(BlockPos const&, Block const&, Block const&);
    void sendBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    void sendBlockDestructionStarted(Player &, BlockPos const&);
    void sendUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    ~BlockEventCoordinator();
//  void sendBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    void sendBlockExploded(BlockPos const&, Block const&, Actor *);
    BlockEventCoordinator();
    void sendBlockInteractedWith(Player &, BlockPos const&);
};
