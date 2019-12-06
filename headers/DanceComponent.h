#pragma once

class DanceComponent {

public:

    void DanceComponent(DanceComponent&&);
    void DanceComponent(void);
    void initFromDefinition(Actor &);
    void inListenDistance(Vec3 const&)const;
};
