#pragma once

#include <string>
#include "../Command.h"
#include <vector>


class TickingAreaCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TickingAreaCommand();
    void _remove(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _list(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _add(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    TickingAreaCommand();
    void setup(CommandRegistry &);
    void _removeAll(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    std::string _formatTickingAreaList(std::vector<TickingAreaDescription> const&)const;
};
