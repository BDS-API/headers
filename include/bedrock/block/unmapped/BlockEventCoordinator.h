#pragma once

#include "../../level/Level"
#include "../../actor/Player"
#include "../../actor/Actor"
#include "../../util/BlockPos"
#include "../../../unmapped/NewBlockID"
#include "../../../unmapped/Block"


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
