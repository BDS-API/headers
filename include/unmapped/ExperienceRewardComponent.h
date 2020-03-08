#pragma once

#include "../bedrock/actor/Actor"


class ExperienceRewardComponent {

public:

    void getOnBredExperience(Actor &)const;
    void getOnDeathExperience(Actor &)const;
    ExperienceRewardComponent(ExperienceRewardComponent&&);
    ExperienceRewardComponent(void);
};
