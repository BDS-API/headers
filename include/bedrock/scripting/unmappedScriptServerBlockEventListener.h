#pragma once

#include "../../../unmapped/Block.h"
#include <string>
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockEventListener.h"
#include "../../../unmapped/MinecraftServerScriptEngine.h"
#include "../../actor/Player.h"


class ScriptServerBlockEventListener : BlockEventListener {

public:
    virtual ~ScriptServerBlockEventListener();
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::string, BlockPos const&);
//  virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState); //TODO: incomplete function definition
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);

    ScriptServerBlockEventListener(MinecraftServerScriptEngine &);
};
