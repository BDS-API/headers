#pragma once

#include "../CommandRegistry.h"
#include "../../../unmapped/InitProxy.h"
#include "../CommandOutput.h"
#include "../orgin/CommandOrigin.h"
#include "../Command.h"


class MobEventCommand : Command {

public:
    virtual ~MobEventCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    MobEventCommand();
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
};
