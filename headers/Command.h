#pragma once

class Command {

    virtual ~Command();
    virtual ~Command();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
