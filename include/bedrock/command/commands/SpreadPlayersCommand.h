#pragma once

#include "../Command.h"
#include <vector>


class SpreadPlayersCommand : Command {

public:
    ~SpreadPlayersCommand(); // _ZN20SpreadPlayersCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK20SpreadPlayersCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN20SpreadPlayersCommand5setupER15CommandRegistry
    SpreadPlayersCommand(); // _ZN20SpreadPlayersCommandC2Ev
    void createInitialPositions(Random &, int, Vec2 const&, Vec2 const&); // _ZN20SpreadPlayersCommand22createInitialPositionsER6RandomiRK4Vec2S4_
    void spreadPositions(CommandOutput &, Random &, BlockSource &, Vec2 const&, float, Vec2 const&, Vec2 const&, std::vector<Vec2> &); // _ZN20SpreadPlayersCommand15spreadPositionsER13CommandOutputR6RandomR11BlockSourceRK4Vec2fS8_S8_RSt6vectorIS6_SaIS6_EE
//  void setPlayerPositions(CommandSelectorResults<Actor> &, BlockSource &, std::vector<Vec2> &); //TODO: incomplete function definition // _ZN20SpreadPlayersCommand18setPlayerPositionsER22CommandSelectorResultsI5ActorER11BlockSourceRSt6vectorI4Vec2SaIS7_EE
//  void spreadEntities(CommandOutput &, CommandSelectorResults<Actor> &, BlockSource &, Vec2 const&, float, float); //TODO: incomplete function definition // _ZN20SpreadPlayersCommand14spreadEntitiesER13CommandOutputR22CommandSelectorResultsI5ActorER11BlockSourceRK4Vec2ff
};
