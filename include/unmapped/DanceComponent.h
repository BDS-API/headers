#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Vec3.h"


class DanceComponent {

public:
    DanceComponent();
    void inListenDistance(Vec3 const&)const;
    DanceComponent(DanceComponent &&);
    void initFromDefinition(Actor &);
    ~DanceComponent();
};
