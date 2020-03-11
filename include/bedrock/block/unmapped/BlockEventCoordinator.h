#pragma once

#include "../../../unmapped/Block.h"
#include "../../actor/Actor.h"
#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/NewBlockID.h"
#include <string>


class BlockEventCoordinator {

public:

    void sendBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    void sendBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
//  void sendBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    void sendBlockDestructionStopped(Player &, BlockPos const&, int);
    void sendBlockDestructionStarted(Player &, BlockPos const&);
    void sendBlockInteractedWith(Player &, BlockPos const&);
    void sendBlockExploded(BlockPos const&, Block const&, Actor *);
    void sendBlockModified(BlockPos const&, Block const&, Block const&);
    void sendUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    ~BlockEventCoordinator();
    BlockEventCoordinator();
};
