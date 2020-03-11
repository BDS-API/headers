#pragma once

#include "./RaidTriggerComponent.h"
#include "../bedrock/actor/Actor.h"


class RaidTriggerComponent {

public:

    RaidTriggerComponent(RaidTriggerComponent &&);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void triggerRaid(Actor &);
};
