#pragma once



class DanceComponent {

public:
    ~DanceComponent(); // _ZN14DanceComponentD2Ev
    DanceComponent(DanceComponent &&); // _ZN14DanceComponentC2EOS_
    DanceComponent(); // _ZN14DanceComponentC2Ev
    void initFromDefinition(Actor &); // _ZN14DanceComponent18initFromDefinitionER5Actor
    void inListenDistance(Vec3 const&)const; // _ZNK14DanceComponent16inListenDistanceERK4Vec3
};
