#pragma once

class CommandFunctionEntry : IFunctionEntry {

    virtual void ~CommandFunctionEntry();
    virtual void ~CommandFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
}
