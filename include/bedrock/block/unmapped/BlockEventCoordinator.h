#pragma once

#include <string>


class BlockEventCoordinator {

public:
    void sendBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool); // _ZN21BlockEventCoordinator23sendBlockPlacedByPlayerER6PlayerRK5BlockRK8BlockPosb
    void sendBlockDestroyedByPlayer(Player &, std::string, BlockPos const&); // _ZN21BlockEventCoordinator26sendBlockDestroyedByPlayerER6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos
//  void sendBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition // _ZN21BlockEventCoordinator22sendBlockMovedByPistonERK8BlockPosS2_N16PistonBlockActor11PistonStateE
    void sendBlockDestructionStopped(Player &, BlockPos const&, int); // _ZN21BlockEventCoordinator27sendBlockDestructionStoppedER6PlayerRK8BlockPosi
    void sendBlockDestructionStarted(Player &, BlockPos const&); // _ZN21BlockEventCoordinator27sendBlockDestructionStartedER6PlayerRK8BlockPos
    void sendBlockInteractedWith(Player &, BlockPos const&); // _ZN21BlockEventCoordinator23sendBlockInteractedWithER6PlayerRK8BlockPos
    void sendBlockExploded(BlockPos const&, Block const&, Actor *); // _ZN21BlockEventCoordinator17sendBlockExplodedERK8BlockPosRK5BlockP5Actor
    void sendBlockModified(BlockPos const&, Block const&, Block const&); // _ZN21BlockEventCoordinator17sendBlockModifiedERK8BlockPosRK5BlockS5_
    void sendUnknownBlockReceived(Level &, NewBlockID const&, unsigned short); // _ZN21BlockEventCoordinator24sendUnknownBlockReceivedER5LevelRK10NewBlockIDt
    ~BlockEventCoordinator(); // _ZN21BlockEventCoordinatorD2Ev
    BlockEventCoordinator(); // _ZN21BlockEventCoordinatorC2Ev
};
