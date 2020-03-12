#pragma once

#include "../Command.h"


class VideoStreamServerCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~VideoStreamServerCommand();
    VideoStreamServerCommand();
    void setup(CommandRegistry &);
};
