#pragma once

#include "../CommandRegistry"
#include "../orgin/CommandOrigin"
#include "../CommandOutput"


class TitleRawCommand : MessagingCommand {

public:
    virtual TitleRawCommand::~TitleRawCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleRawCommand(void);
};
