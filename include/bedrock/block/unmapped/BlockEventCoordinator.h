#pragma once

#include "../../actor/Actor"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../actor/Player"
#include "../../../unmapped/NewBlockID"


class BlockEventCoordinator {

public:

    void sendBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    void sendBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    void sendBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    void sendBlockDestructionStopped(Player &, BlockPos const&, int);
    void sendBlockDestructionStarted(Player &, BlockPos const&);
    void sendBlockInteractedWith(Player &, BlockPos const&);
    void sendBlockExploded(BlockPos const&, Block const&, Actor *);
    void sendBlockModified(BlockPos const&, Block const&, Block const&);
    void sendUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    BlockEventCoordinator(void);
};
