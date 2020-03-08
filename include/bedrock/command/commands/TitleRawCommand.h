#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class TitleRawCommand : MessagingCommand {

public:
    TitleRawCommand::~TitleRawCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TitleRawCommand(void);
};
