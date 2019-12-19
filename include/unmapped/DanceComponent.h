#pragma once

class DanceComponent {

public:

    DanceComponent(DanceComponent&&);
    DanceComponent(void);
    void initFromDefinition(Actor &);
    void inListenDistance(Vec3 const&)const;
};
