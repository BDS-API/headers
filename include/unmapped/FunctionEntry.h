#pragma once

#include "IFunctionEntry.h"
#include <memory>
#include <vector>


class FunctionEntry : IFunctionEntry {

public:
    virtual void execute(FunctionManager &, CommandOrigin const&);
    ~FunctionEntry();
//  FunctionEntry(FunctionState); //TODO: incomplete function definition
    FunctionEntry();
    void _addEntry(std::unique_ptr<IFunctionEntry>);
    void getErrorState()const;
//  FunctionEntry(std::vector<std::unique_ptr<IFunctionEntry>> &&, FunctionState); //TODO: incomplete function definition
};
