#pragma once

#include "../../../unmapped/TickingAreaDescription.h"
#include "../Command.h"
#include "../../level/Level.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include <vector>
#include "../../../unmapped/Dimension.h"
#include "../CommandOutput.h"


class TickingAreaCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TickingAreaCommand();
    void _add(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _list(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    TickingAreaCommand();
    void _removeAll(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    std::string _formatTickingAreaList(std::vector<TickingAreaDescription> const&)const;
    void _remove(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void setup(CommandRegistry &);
};
