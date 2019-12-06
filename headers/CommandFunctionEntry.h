#pragma once

class CommandFunctionEntry : IFunctionEntry {

public:
    virtual ~CommandFunctionEntry();
    virtual void execute(FunctionManager &, CommandOrigin const&);

    void CommandFunctionEntry(void);
    void CommandFunctionEntry(std::unique_ptr<Command, std::default_delete<Command>>);
};
