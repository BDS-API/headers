#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class VideoStreamServerCommand : Command {

public:
    VideoStreamServerCommand::~VideoStreamServerCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    VideoStreamServerCommand(void);
};
