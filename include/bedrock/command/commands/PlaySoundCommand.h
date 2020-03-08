#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class PlaySoundCommand : Command {

public:
    PlaySoundCommand::~PlaySoundCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    PlaySoundCommand(void);
};
