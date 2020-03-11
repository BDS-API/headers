#pragma once

#include "./IFunctionEntry.h"
#include <memory>
#include "../bedrock/command/orgin/CommandOrigin.h"
#include "./FunctionManager.h"
#include <vector>


class FunctionEntry : IFunctionEntry {

public:
    virtual ~FunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);

    FunctionEntry();
//  FunctionEntry(FunctionState); //TODO: incomplete function definition
//  FunctionEntry(std::vector<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>, std::allocator<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>>> &&, FunctionState); //TODO: incomplete function definition
    void getErrorState()const;
    void _addEntry(std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>);
};
