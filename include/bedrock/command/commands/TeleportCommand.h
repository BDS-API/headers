#pragma once

#include "../CommandOutput.h"
#include "../../util/Vec3.h"
#include "../Command.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/Dimension.h"
#include "../CommandArea.h"


class TeleportCommand : Command {

public:
    ~TeleportCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
//  void getCommandAreaForTargets(CommandOrigin const&, CommandSelectorResults<Actor> const&, Vec3, bool); //TODO: incomplete function definition
    void actorToLocationTeleportAnalysis(CommandOrigin const&, CommandArea const&, CommandArea &, Actor const&, Vec3);
    void getFacingDirection(CommandOrigin const&, CommandOutput &, Vec3 &)const;
    TeleportCommand();
    void setup(CommandRegistry &);
    void getSafetyAABB(Actor const&, Vec3);
    bool canMoveEntityToLocation(CommandOrigin const&, Actor const&, BlockPos const&);
//  void teleport(Actor &, Vec3, Vec3 *, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
};
