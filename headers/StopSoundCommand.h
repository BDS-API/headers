#pragma once

class StopSoundCommand : Command {

    virtual ~StopSoundCommand();
    virtual ~StopSoundCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
}
