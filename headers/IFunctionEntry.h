#pragma once

class IFunctionEntry {

    virtual void ~IFunctionEntry();
    virtual void ~IFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
}
