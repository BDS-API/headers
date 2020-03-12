#pragma once

#include "../Command.h"


class MobEventCommand : Command {

public:
    class InitProxy;

    ~MobEventCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    MobEventCommand();
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&);
    class InitProxy {

    public:
        InitProxy(ServerLevel &);
        InitProxy(MobEvents &);
        void getMobEvents();
    };
};
