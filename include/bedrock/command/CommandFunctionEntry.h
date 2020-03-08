#pragma once

#include "orgin/CommandOrigin"
#include "../../unmapped/IFunctionEntry"
#include "../../unmapped/FunctionManager"


class CommandFunctionEntry : IFunctionEntry {

public:
    CommandFunctionEntry::~CommandFunctionEntry()
    virtual void execute(FunctionManager &, CommandOrigin const&);

    CommandFunctionEntry(void);
    CommandFunctionEntry(std::unique_ptr<Command, std::default_delete<Command>>);
};
