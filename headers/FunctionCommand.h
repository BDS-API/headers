#pragma once

class FunctionCommand : Command {

    virtual ~FunctionCommand();
    virtual ~FunctionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
