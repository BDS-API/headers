#pragma once

class ScoreboardCommand : Command {

    virtual ~ScoreboardCommand();
    virtual ~ScoreboardCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
