#pragma once

#include <string>
#include "../Command.h"
#include <vector>


class TickingAreaCommand : Command {

public:
    ~TickingAreaCommand(); // _ZN18TickingAreaCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK18TickingAreaCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &); // _ZN18TickingAreaCommand5setupER15CommandRegistry
    TickingAreaCommand(); // _ZN18TickingAreaCommandC2Ev
    void _add(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const; // _ZNK18TickingAreaCommand4_addERK13CommandOriginR13CommandOutputR5LevelR9Dimension
    void _remove(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const; // _ZNK18TickingAreaCommand7_removeERK13CommandOriginR13CommandOutputR5LevelR9Dimension
    void _removeAll(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const; // _ZNK18TickingAreaCommand10_removeAllERK13CommandOriginR13CommandOutputR5LevelR9Dimension
    void _list(CommandOrigin const&, CommandOutput &, Level &, Dimension &)const; // _ZNK18TickingAreaCommand5_listERK13CommandOriginR13CommandOutputR5LevelR9Dimension
    std::string _formatTickingAreaList(std::vector<TickingAreaDescription> const&)const; // _ZNK18TickingAreaCommand22_formatTickingAreaListB5cxx11ERKSt6vectorI22TickingAreaDescriptionSaIS1_EE
};
