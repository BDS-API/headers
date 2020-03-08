#pragma once

#include "../Command"
#include "../CommandRegistry"
#include "../orgin/CommandOrigin"


class VideoStreamServerCommand : Command {

public:
    virtual VideoStreamServerCommand::~VideoStreamServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    VideoStreamServerCommand(void);
};
