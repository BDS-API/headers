#pragma once

class VideoStreamServerCommand : Command {

public:
    virtual VideoStreamServerCommand::~VideoStreamServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    VideoStreamServerCommand(void);
};
