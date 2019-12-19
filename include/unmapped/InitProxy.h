#pragma once

using namespace MobEventCommand;

class InitProxy {

public:

    InitProxy(ServerLevel &);
    InitProxy(MobEvents &);
    void getMobEvents(void);
};
