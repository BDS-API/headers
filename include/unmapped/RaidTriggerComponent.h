#pragma once



class RaidTriggerComponent {

public:
    RaidTriggerComponent(RaidTriggerComponent &&); // _ZN20RaidTriggerComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN20RaidTriggerComponent18initFromDefinitionER5Actor
    void reloadComponent(Actor &); // _ZN20RaidTriggerComponent15reloadComponentER5Actor
    void triggerRaid(Actor &); // _ZN20RaidTriggerComponent11triggerRaidER5Actor
};
