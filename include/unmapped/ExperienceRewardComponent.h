#pragma once

class ExperienceRewardComponent {

public:

    void getOnBredExperience(Actor &)const;
    void getOnDeathExperience(Actor &)const;
    ExperienceRewardComponent(ExperienceRewardComponent&&);
    ExperienceRewardComponent(void);
};
