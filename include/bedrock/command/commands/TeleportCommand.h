#pragma once

#include "../Command.h"
#include "../../util/Vec3.h"


class TeleportCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TeleportCommand();
//  void getCommandAreaForTargets(CommandOrigin const&, CommandSelectorResults<Actor> const&, Vec3, bool); //TODO: incomplete function definition
//  void teleport(Actor &, Vec3, Vec3 *, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    TeleportCommand();
    void actorToLocationTeleportAnalysis(CommandOrigin const&, CommandArea const&, CommandArea &, Actor const&, Vec3);
    void getFacingDirection(CommandOrigin const&, CommandOutput &, Vec3 &)const;
    void getSafetyAABB(Actor const&, Vec3);
    bool canMoveEntityToLocation(CommandOrigin const&, Actor const&, BlockPos const&);
    void setup(CommandRegistry &);
};
