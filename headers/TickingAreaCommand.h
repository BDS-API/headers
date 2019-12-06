#pragma once

class TickingAreaCommand : Command {

public:
    virtual ~TickingAreaCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void TickingAreaCommand(void);
    void _add(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _remove(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _removeAll(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _list(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
};
