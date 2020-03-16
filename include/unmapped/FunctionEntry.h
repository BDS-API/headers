#pragma once

#include "IFunctionEntry.h"
#include <memory>
#include <vector>


class FunctionEntry : public IFunctionEntry {

public:
    virtual ~FunctionEntry(); // _ZN13FunctionEntryD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(FunctionManager &, CommandOrigin const&); // _ZN13FunctionEntry7executeER15FunctionManagerRK13CommandOrigin
    FunctionEntry(); // _ZN13FunctionEntryC2Ev
//    FunctionEntry(long); //TODO: incomplete function definition // _ZN13FunctionEntryC2E13FunctionState
//    FunctionEntry(std::vector<std::unique_ptr<IFunctionEntry>> &&, long); //TODO: incomplete function definition // _ZN13FunctionEntryC2EOSt6vectorISt10unique_ptrI14IFunctionEntrySt14default_deleteIS2_EESaIS5_EE13FunctionState
    void getErrorState()const; // _ZNK13FunctionEntry13getErrorStateEv
    void _addEntry(std::unique_ptr<IFunctionEntry>); // _ZN13FunctionEntry9_addEntryESt10unique_ptrI14IFunctionEntrySt14default_deleteIS1_EE
};
