#pragma once



class ExperienceRewardComponent {

public:
    void getOnBredExperience(Actor &)const; // _ZNK25ExperienceRewardComponent19getOnBredExperienceER5Actor
    void getOnDeathExperience(Actor &)const; // _ZNK25ExperienceRewardComponent20getOnDeathExperienceER5Actor
    ~ExperienceRewardComponent(); // _ZN25ExperienceRewardComponentD2Ev
    ExperienceRewardComponent(ExperienceRewardComponent &&); // _ZN25ExperienceRewardComponentC2EOS_
    ExperienceRewardComponent(); // _ZN25ExperienceRewardComponentC2Ev
};
