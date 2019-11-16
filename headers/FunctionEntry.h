#pragma once

class FunctionEntry : IFunctionEntry {

    virtual void ~FunctionEntry();
    virtual void ~FunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
}
