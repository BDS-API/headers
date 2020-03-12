#pragma once

#include <string>
#include "../../block/unmapped/BlockEventListener.h"


class ScriptServerBlockEventListener : BlockEventListener {

public:
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    ~ScriptServerBlockEventListener();
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    ScriptServerBlockEventListener(MinecraftServerScriptEngine &);
};
