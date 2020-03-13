#pragma once

#include <string>


class BlockEventListener {

public:
    ~BlockEventListener(); // _ZN18BlockEventListenerD2Ev
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool); // _ZN18BlockEventListener21onBlockPlacedByPlayerER6PlayerRK5BlockRK8BlockPosb
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&); // _ZN18BlockEventListener24onBlockDestroyedByPlayerER6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition // _ZN18BlockEventListener20onBlockMovedByPistonERK8BlockPosS2_N16PistonBlockActor11PistonStateE
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int); // _ZN18BlockEventListener25onBlockDestructionStoppedER6PlayerRK8BlockPosi
    virtual void onBlockDestructionStarted(Player &, BlockPos const&); // _ZN18BlockEventListener25onBlockDestructionStartedER6PlayerRK8BlockPos
    virtual void onBlockInteractedWith(Player &, BlockPos const&); // _ZN18BlockEventListener21onBlockInteractedWithER6PlayerRK8BlockPos
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *); // _ZN18BlockEventListener15onBlockExplodedERK8BlockPosRK5BlockP5Actor
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&); // _ZN18BlockEventListener15onBlockModifiedERK8BlockPosRK5BlockS5_
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short); // _ZN18BlockEventListener22onUnknownBlockReceivedER5LevelRK10NewBlockIDt
    BlockEventListener(); // _ZN18BlockEventListenerC2Ev
};
