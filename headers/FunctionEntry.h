#pragma once

class FunctionEntry : IFunctionEntry {

public:
    virtual ~FunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);

    void FunctionEntry(void);
    void FunctionEntry(FunctionState);
    void FunctionEntry(std::vector<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>, std::allocator<std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>>> &&, FunctionState);
    void getErrorState(void)const;
    void _addEntry(std::unique_ptr<IFunctionEntry, std::default_delete<IFunctionEntry>>);
};
