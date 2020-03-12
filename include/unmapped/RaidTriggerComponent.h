#pragma once



class RaidTriggerComponent {

public:
    RaidTriggerComponent(RaidTriggerComponent &&);
    void initFromDefinition(Actor &);
    void triggerRaid(Actor &);
    void reloadComponent(Actor &);
};
