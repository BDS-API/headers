#pragma once

class CommandFunctionEntry : IFunctionEntry {

    virtual ~CommandFunctionEntry();
    virtual ~CommandFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
}
