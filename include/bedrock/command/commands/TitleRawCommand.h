#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandRegistry"


class TitleRawCommand : MessagingCommand {

public:
    virtual TitleRawCommand::~TitleRawCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleRawCommand(void);
};
