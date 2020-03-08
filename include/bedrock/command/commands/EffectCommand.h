#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class EffectCommand : Command {

public:
    virtual EffectCommand::~EffectCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EffectCommand(void);
    void clear(CommandOrigin const&, CommandOutput &)const;
};
