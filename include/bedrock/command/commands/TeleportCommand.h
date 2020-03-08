#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../../actor/Actor"
#include "../orgin/CommandOrigin"


class TeleportCommand : Command {

public:
    virtual TeleportCommand::~TeleportCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TeleportCommand(void);
    bool canMoveEntityToLocation(CommandOrigin const&, Actor const&, BlockPos const&);
    void teleport(Actor &, Vec3, Vec3*, AutomaticID<Dimension, int>)const;
    void getFacingDirection(CommandOrigin const&, CommandOutput &, Vec3 &)const;
    void getCommandAreaForTargets(CommandOrigin const&, CommandSelectorResults<Actor> const&, Vec3, bool);
    void actorToLocationTeleportAnalysis(CommandOrigin const&, CommandArea const&, CommandArea&, Actor const&, Vec3);
    void getSafetyAABB(Actor const&, Vec3);
};
