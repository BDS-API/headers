#pragma once

#include <memory>
#include "../../unmapped/IFunctionEntry.h"


class CommandFunctionEntry : IFunctionEntry {

public:
    virtual void execute(FunctionManager &, CommandOrigin const&);
    ~CommandFunctionEntry();
    CommandFunctionEntry(std::unique_ptr<Command>);
    CommandFunctionEntry();
};
