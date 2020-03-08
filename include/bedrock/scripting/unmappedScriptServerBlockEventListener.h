#pragma once

#include "../../actor/Actor"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../block/unmapped/BlockEventListener"
#include "../../actor/Player"
#include "../../../unmapped/MinecraftServerScriptEngine"


class ScriptServerBlockEventListener : BlockEventListener {

public:
    virtual ScriptServerBlockEventListener::~ScriptServerBlockEventListener()
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);

    ScriptServerBlockEventListener(MinecraftServerScriptEngine &);
};
