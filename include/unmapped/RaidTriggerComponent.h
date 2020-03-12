#pragma once

#include "../bedrock/actor/Actor.h"


class RaidTriggerComponent {

public:
    void initFromDefinition(Actor &);
    void triggerRaid(Actor &);
    RaidTriggerComponent(RaidTriggerComponent &&);
    void reloadComponent(Actor &);
};
