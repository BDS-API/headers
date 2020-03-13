#pragma once

#include "../Command.h"


class MobEventCommand : Command {

public:
    class InitProxy;

    ~MobEventCommand(); // _ZN15MobEventCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15MobEventCommand7executeERK13CommandOriginR13CommandOutput
    MobEventCommand(); // _ZN15MobEventCommandC2Ev
    void setup(CommandRegistry &, MobEventCommand::InitProxy &&); // _ZN15MobEventCommand5setupER15CommandRegistryONS_9InitProxyE
    class InitProxy {

    public:
        InitProxy(ServerLevel &); // _ZN15MobEventCommand9InitProxyC2ER11ServerLevel
        InitProxy(MobEvents &); // _ZN15MobEventCommand9InitProxyC2ER9MobEvents
        void getMobEvents(); // _ZN15MobEventCommand9InitProxy12getMobEventsEv
    };
};
