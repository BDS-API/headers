#pragma once

#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../../actor/Actor.h"
#include "../../util/Vec2.h"
#include <vector>
#include "../Command.h"
#include "../CommandOutput.h"


class SpreadPlayersCommand : Command {

public:
    ~SpreadPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    SpreadPlayersCommand();
    void setup(CommandRegistry &);
    void createInitialPositions(Random &, int, Vec2 const&, Vec2 const&);
//  void spreadEntities(CommandOutput &, CommandSelectorResults<Actor> &, BlockSource &, Vec2 const&, float, float); //TODO: incomplete function definition
//  void setPlayerPositions(CommandSelectorResults<Actor> &, BlockSource &, std::vector<Vec2> &); //TODO: incomplete function definition
    void spreadPositions(CommandOutput &, Random &, BlockSource &, Vec2 const&, float, Vec2 const&, Vec2 const&, std::vector<Vec2> &);
};
