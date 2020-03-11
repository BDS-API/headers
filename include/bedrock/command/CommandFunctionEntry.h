#pragma once

#include "../../unmapped/FunctionManager.h"
#include <memory>
#include "../../unmapped/IFunctionEntry.h"
#include "orgin/CommandOrigin.h"
#include "./Command.h"


class CommandFunctionEntry : IFunctionEntry {

public:
    virtual ~CommandFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);

    CommandFunctionEntry();
    CommandFunctionEntry(std::unique_ptr<Command, std::default_delete<Command>>);
};
