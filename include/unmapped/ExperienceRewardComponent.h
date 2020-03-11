#pragma once

#include "../bedrock/actor/Actor.h"
#include "./ExperienceRewardComponent.h"


class ExperienceRewardComponent {

public:

    void getOnBredExperience(Actor &)const;
    void getOnDeathExperience(Actor &)const;
    ~ExperienceRewardComponent();
    ExperienceRewardComponent(ExperienceRewardComponent &&);
    ExperienceRewardComponent();
};
