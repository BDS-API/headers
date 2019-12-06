#pragma once

class RaidTriggerComponent {

public:

    void RaidTriggerComponent(RaidTriggerComponent&&);
    void initFromDefinition(Actor &);
    void reloadComponent(Actor &);
    void triggerRaid(Actor &);
};
