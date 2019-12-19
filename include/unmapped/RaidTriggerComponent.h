#pragma once

class RaidTriggerComponent {

public:

    RaidTriggerComponent(RaidTriggerComponent&&);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void triggerRaid(Actor &);
};
