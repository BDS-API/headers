#pragma once

#include "../../unmapped/IFunctionEntry"
#include "orgin/CommandOrigin"
#include "../../unmapped/FunctionManager"


class CommandFunctionEntry : IFunctionEntry {

public:
    virtual CommandFunctionEntry::~CommandFunctionEntry()
    virtual void execute(FunctionManager &, CommandOrigin const&);

    CommandFunctionEntry(void);
    CommandFunctionEntry(std::unique_ptr<Command, std::default_delete<Command>>);
};
