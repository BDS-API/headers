#pragma once

#include "../bedrock/actor/Actor"


class RaidTriggerComponent {

public:

    RaidTriggerComponent(RaidTriggerComponent&&);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void triggerRaid(Actor &);
};
