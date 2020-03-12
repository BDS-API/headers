#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class VideoStreamServerCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~VideoStreamServerCommand();
    void setup(CommandRegistry &);
    VideoStreamServerCommand();
};
