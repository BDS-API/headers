#pragma once

#include "../../unmapped/IFunctionEntry.h"
#include "origin/CommandOrigin.h"
#include "Command.h"
#include <memory>
#include "../../unmapped/FunctionManager.h"


class CommandFunctionEntry : IFunctionEntry {

public:
    virtual void execute(FunctionManager &, CommandOrigin const&);
    ~CommandFunctionEntry();
    CommandFunctionEntry(std::unique_ptr<Command>);
    CommandFunctionEntry();
};
