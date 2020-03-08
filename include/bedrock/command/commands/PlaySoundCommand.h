#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class PlaySoundCommand : Command {

public:
    virtual PlaySoundCommand::~PlaySoundCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    PlaySoundCommand(void);
};
