#pragma once



class ExperienceRewardComponent {

public:
    ExperienceRewardComponent(ExperienceRewardComponent &&);
    void getOnBredExperience(Actor &)const;
    ExperienceRewardComponent();
    void getOnDeathExperience(Actor &)const;
    ~ExperienceRewardComponent();
};
