#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class TickingAreaCommand : Command {

public:
    virtual TickingAreaCommand::~TickingAreaCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TickingAreaCommand(void);
    void _add(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _remove(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _removeAll(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _list(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
};
