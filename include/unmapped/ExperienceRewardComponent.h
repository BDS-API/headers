#pragma once

#include "../bedrock/actor/Actor.h"


class ExperienceRewardComponent {

public:
    ~ExperienceRewardComponent();
    ExperienceRewardComponent(ExperienceRewardComponent &&);
    void getOnDeathExperience(Actor &)const;
    void getOnBredExperience(Actor &)const;
    ExperienceRewardComponent();
};
