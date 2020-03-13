#pragma once

#include <memory>
#include "IFunctionEntry.h"
#include <vector>


class FunctionEntry : IFunctionEntry {

public:
    ~FunctionEntry(); // _ZN13FunctionEntryD2Ev
    virtual void execute(FunctionManager &, CommandOrigin const&); // _ZN13FunctionEntry7executeER15FunctionManagerRK13CommandOrigin
    FunctionEntry(); // _ZN13FunctionEntryC2Ev
//  FunctionEntry(FunctionState); //TODO: incomplete function definition // _ZN13FunctionEntryC2E13FunctionState
//  FunctionEntry(std::vector<std::unique_ptr<IFunctionEntry>> &&, FunctionState); //TODO: incomplete function definition // _ZN13FunctionEntryC2EOSt6vectorISt10unique_ptrI14IFunctionEntrySt14default_deleteIS2_EESaIS5_EE13FunctionState
    void getErrorState()const; // _ZNK13FunctionEntry13getErrorStateEv
    void _addEntry(std::unique_ptr<IFunctionEntry>); // _ZN13FunctionEntry9_addEntryESt10unique_ptrI14IFunctionEntrySt14default_deleteIS1_EE
};
