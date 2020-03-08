#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class EffectCommand : Command {

public:
    EffectCommand::~EffectCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EffectCommand(void);
    void clear(CommandOrigin const&, CommandOutput &)const;
};
