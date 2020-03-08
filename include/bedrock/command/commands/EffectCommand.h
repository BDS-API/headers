#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class EffectCommand : Command {

public:
    virtual EffectCommand::~EffectCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    EffectCommand(void);
    void clear(CommandOrigin const&, CommandOutput &)const;
};
