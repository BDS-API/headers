#pragma once

class FunctionEntry : IFunctionEntry {

    virtual ~FunctionEntry();
    virtual ~FunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
}
