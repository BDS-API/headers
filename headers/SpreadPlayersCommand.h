#pragma once

class SpreadPlayersCommand : Command {

public:
    virtual ~SpreadPlayersCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void SpreadPlayersCommand(void);
    void createInitialPositions(Random &, int, Vec2 const&, Vec2 const&);
    void spreadPositions(CommandOutput &, Random &, BlockSource &, Vec2 const&, float, Vec2 const&, Vec2 const&, std::vector<Vec2, std::allocator<Vec2>> &);
    void setPlayerPositions(CommandSelectorResults<Actor> &, BlockSource &, std::vector<Vec2, std::allocator<Vec2>> &);
    void spreadEntities(CommandOutput &, CommandSelectorResults<Actor> &, BlockSource &, Vec2 const&, float, float);
};
