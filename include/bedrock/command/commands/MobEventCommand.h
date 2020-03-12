#pragma once

#include "../../../unmapped/MobEvents.h"
#include "../../level/ServerLevel.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../Command.h"
#include "../CommandOutput.h"


class MobEventCommand : Command {

public:
    class InitProxy;

    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~MobEventCommand();
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
    MobEventCommand();
    class InitProxy {

    public:
        InitProxy(ServerLevel &);
        void getMobEvents();
        InitProxy(MobEvents &);
    };
};
