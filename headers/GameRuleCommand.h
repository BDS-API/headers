#pragma once

class GameRuleCommand : Command {

    virtual ~GameRuleCommand();
    virtual ~GameRuleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
