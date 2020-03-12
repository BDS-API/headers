#pragma once



class DanceComponent {

public:
    void inListenDistance(Vec3 const&)const;
    DanceComponent();
    ~DanceComponent();
    DanceComponent(DanceComponent &&);
    void initFromDefinition(Actor &);
};
