#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include "../../block/unmapped/BlockEventListener.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class ScriptServerBlockEventListener : BlockEventListener {

public:
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    ~ScriptServerBlockEventListener();
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    ScriptServerBlockEventListener(MinecraftServerScriptEngine &);
};
