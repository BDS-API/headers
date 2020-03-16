#pragma once

#include <memory>
#include "../../unmapped/IFunctionEntry.h"


class CommandFunctionEntry : public IFunctionEntry {

public:
    virtual ~CommandFunctionEntry(); // _ZN20CommandFunctionEntryD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(FunctionManager &, CommandOrigin const&); // _ZN20CommandFunctionEntry7executeER15FunctionManagerRK13CommandOrigin
    CommandFunctionEntry(); // _ZN20CommandFunctionEntryC2Ev
    CommandFunctionEntry(std::unique_ptr<Command>); // _ZN20CommandFunctionEntryC2ESt10unique_ptrI7CommandSt14default_deleteIS1_EE
};
