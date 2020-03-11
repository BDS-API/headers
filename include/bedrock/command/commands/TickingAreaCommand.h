#pragma once

#include "../CommandRegistry.h"
#include "../../../unmapped/TickingAreaDescription.h"
#include "../CommandOutput.h"
#include <memory>
#include "../../../unmapped/Dimension.h"
#include "../../level/Level.h"
#include <vector>
#include "../Command.h"
#include "../orgin/CommandOrigin.h"
#include <string>


class TickingAreaCommand : Command {

public:
    virtual ~TickingAreaCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TickingAreaCommand();
    void _add(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _remove(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _removeAll(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    void _list(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const;
    std::string _formatTickingAreaList(std::vector<TickingAreaDescription, std::allocator<TickingAreaDescription>> const&)const;
};
