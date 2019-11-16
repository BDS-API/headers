#pragma once

class PlaySoundCommand : Command {

    virtual ~PlaySoundCommand();
    virtual ~PlaySoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
