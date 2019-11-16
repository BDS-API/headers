#pragma once

class IFunctionEntry {

    virtual ~IFunctionEntry();
    virtual ~IFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
}
