#pragma once

#include "../CommandRegistry.h"
#include "../CommandArea.h"
#include "../CommandOutput.h"
#include "../../actor/Actor.h"
#include "../../util/Vec3.h"
#include "../../../unmapped/Dimension.h"
#include "../../util/BlockPos.h"
#include "../Command.h"
#include "../orgin/CommandOrigin.h"


class TeleportCommand : Command {

public:
    virtual ~TeleportCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TeleportCommand();
    bool canMoveEntityToLocation(CommandOrigin const&, Actor const&, BlockPos const&);
//  void teleport(Actor &, Vec3, Vec3 *, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    void getFacingDirection(CommandOrigin const&, CommandOutput &, Vec3 &)const;
//  void getCommandAreaForTargets(CommandOrigin const&, CommandSelectorResults<Actor> const&, Vec3, bool); //TODO: incomplete function definition
    void actorToLocationTeleportAnalysis(CommandOrigin const&, CommandArea const&, CommandArea &, Actor const&, Vec3);
    void getSafetyAABB(Actor const&, Vec3);
};
