#pragma once

class Command {

    virtual void ~Command();
    virtual void ~Command();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
