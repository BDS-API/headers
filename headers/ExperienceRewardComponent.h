#pragma once

class ExperienceRewardComponent {

public:

    void getOnBredExperience(Actor &)const;
    void getOnDeathExperience(Actor &)const;
    void ExperienceRewardComponent(ExperienceRewardComponent&&);
    void ExperienceRewardComponent(void);
};
