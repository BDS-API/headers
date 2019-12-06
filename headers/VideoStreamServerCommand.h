#pragma once

class VideoStreamServerCommand : Command {

public:
    virtual ~VideoStreamServerCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    void VideoStreamServerCommand(void);
};
