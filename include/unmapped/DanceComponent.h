#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/Actor"


class DanceComponent {

public:

    DanceComponent(DanceComponent&&);
    DanceComponent(void);
    void initFromDefinition(Actor &);
    void inListenDistance(Vec3 const&)const;
};
