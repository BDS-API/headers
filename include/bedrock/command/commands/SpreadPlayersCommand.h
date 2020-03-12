#pragma once

#include "../Command.h"
#include <vector>


class SpreadPlayersCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SpreadPlayersCommand();
    void createInitialPositions(Random &, int, Vec2 const&, Vec2 const&);
//  void spreadEntities(CommandOutput &, CommandSelectorResults<Actor> &, BlockSource &, Vec2 const&, float, float); //TODO: incomplete function definition
//  void setPlayerPositions(CommandSelectorResults<Actor> &, BlockSource &, std::vector<Vec2> &); //TODO: incomplete function definition
    void spreadPositions(CommandOutput &, Random &, BlockSource &, Vec2 const&, float, Vec2 const&, Vec2 const&, std::vector<Vec2> &);
    void setup(CommandRegistry &);
    SpreadPlayersCommand();
};
