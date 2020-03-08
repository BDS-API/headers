#pragma once

#include "../../unmapped/FunctionManager"
#include "../../unmapped/IFunctionEntry"


class CommandFunctionEntry : IFunctionEntry {

public:
    virtual CommandFunctionEntry::~CommandFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);

    CommandFunctionEntry(void);
    CommandFunctionEntry(std::unique_ptr<Command, std::default_delete<Command>>);
};
