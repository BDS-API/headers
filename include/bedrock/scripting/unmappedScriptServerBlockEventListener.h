#pragma once

#include "../../block/unmapped/BlockEventListener.h"
#include <string>


class ScriptServerBlockEventListener : public BlockEventListener {

public:
    virtual ~ScriptServerBlockEventListener(); // _ZN30ScriptServerBlockEventListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool); // _ZN30ScriptServerBlockEventListener21onBlockPlacedByPlayerER6PlayerRK5BlockRK8BlockPosb
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&); // _ZN30ScriptServerBlockEventListener24onBlockDestroyedByPlayerER6PlayerNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK8BlockPos
    virtual void onBlockMovedByPiston__incomplete0(BlockPos const&, BlockPos const&, long); //TODO: incomplete function definition // _ZN30ScriptServerBlockEventListener20onBlockMovedByPistonERK8BlockPosS2_N16PistonBlockActor11PistonStateE
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int); // _ZN30ScriptServerBlockEventListener25onBlockDestructionStoppedER6PlayerRK8BlockPosi
    virtual void onBlockDestructionStarted(Player &, BlockPos const&); // _ZN30ScriptServerBlockEventListener25onBlockDestructionStartedER6PlayerRK8BlockPos
    virtual void onBlockInteractedWith(Player &, BlockPos const&); // _ZN30ScriptServerBlockEventListener21onBlockInteractedWithER6PlayerRK8BlockPos
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *); // _ZN30ScriptServerBlockEventListener15onBlockExplodedERK8BlockPosRK5BlockP5Actor
    ScriptServerBlockEventListener(MinecraftServerScriptEngine &); // _ZN30ScriptServerBlockEventListenerC2ER27MinecraftServerScriptEngine
};
