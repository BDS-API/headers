#pragma once

#include "../bedrock/command/origin/CommandOrigin.h"
#include "IFunctionEntry.h"
#include <vector>
#include <memory>
#include "FunctionManager.h"


class FunctionEntry : IFunctionEntry {

public:
    ~FunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);
    void _addEntry(std::unique_ptr<IFunctionEntry>);
    FunctionEntry();
//  FunctionEntry(FunctionState); //TODO: incomplete function definition
//  FunctionEntry(std::vector<std::unique_ptr<IFunctionEntry>> &&, FunctionState); //TODO: incomplete function definition
    void getErrorState()const;
};
