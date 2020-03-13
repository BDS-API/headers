#pragma once

#include "../Command.h"
#include "../../util/Vec3.h"


class TeleportCommand : Command {

public:
    ~TeleportCommand(); // _ZN15TeleportCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15TeleportCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN15TeleportCommand5setupER15CommandRegistry
    TeleportCommand(); // _ZN15TeleportCommandC2Ev
    bool canMoveEntityToLocation(CommandOrigin const&, Actor const&, BlockPos const&); // _ZN15TeleportCommand23canMoveEntityToLocationERK13CommandOriginRK5ActorRK8BlockPos
//  void teleport(Actor &, Vec3, Vec3 *, AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK15TeleportCommand8teleportER5Actor4Vec3PS2_11AutomaticIDI9DimensioniE
    void getFacingDirection(CommandOrigin const&, CommandOutput &, Vec3 &)const; // _ZNK15TeleportCommand18getFacingDirectionERK13CommandOriginR13CommandOutputR4Vec3
//  void getCommandAreaForTargets(CommandOrigin const&, CommandSelectorResults<Actor> const&, Vec3, bool); //TODO: incomplete function definition // _ZN15TeleportCommand24getCommandAreaForTargetsERK13CommandOriginRK22CommandSelectorResultsI5ActorE4Vec3b
    void actorToLocationTeleportAnalysis(CommandOrigin const&, CommandArea const&, CommandArea &, Actor const&, Vec3); // _ZN15TeleportCommand31actorToLocationTeleportAnalysisERK13CommandOriginRK11CommandAreaRS3_RK5Actor4Vec3
    void getSafetyAABB(Actor const&, Vec3); // _ZN15TeleportCommand13getSafetyAABBERK5Actor4Vec3
};
