#pragma once

#include "../../actor/Player"
#include "../../actor/Actor"
#include "../../block/unmapped/BlockEventListener"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../../unmapped/MinecraftServerScriptEngine"


class ScriptServerBlockEventListener : BlockEventListener {

public:
    ScriptServerBlockEventListener::~ScriptServerBlockEventListener()
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);

    ScriptServerBlockEventListener(MinecraftServerScriptEngine &);
};
