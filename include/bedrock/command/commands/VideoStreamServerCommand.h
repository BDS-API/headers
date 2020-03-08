#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../Command"


class VideoStreamServerCommand : Command {

public:
    virtual VideoStreamServerCommand::~VideoStreamServerCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    VideoStreamServerCommand(void);
};
