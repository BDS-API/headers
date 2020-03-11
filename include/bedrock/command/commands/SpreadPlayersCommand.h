#pragma once

#include "../../util/Random.h"
#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "../../actor/Actor.h"
#include "../../util/Vec2.h"
#include <memory>
#include "../../block/unmapped/BlockSource.h"
#include <vector>
#include "../Command.h"
#include "../orgin/CommandOrigin.h"


class SpreadPlayersCommand : Command {

public:
    virtual ~SpreadPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    SpreadPlayersCommand();
    void createInitialPositions(Random &, int, Vec2 const&, Vec2 const&);
    void spreadPositions(CommandOutput &, Random &, BlockSource &, Vec2 const&, float, Vec2 const&, Vec2 const&, std::vector<Vec2, std::allocator<Vec2>> &);
//  void setPlayerPositions(CommandSelectorResults<Actor> &, BlockSource &, std::vector<Vec2, std::allocator<Vec2>> &); //TODO: incomplete function definition
//  void spreadEntities(CommandOutput &, CommandSelectorResults<Actor> &, BlockSource &, Vec2 const&, float, float); //TODO: incomplete function definition
};
