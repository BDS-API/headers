#pragma once

#include "../bedrock/util/Vec3.h"
#include "./DanceComponent.h"
#include "../bedrock/actor/Actor.h"


class DanceComponent {

public:

    ~DanceComponent();
    DanceComponent(DanceComponent &&);
    DanceComponent();
    void initFromDefinition(Actor &);
    void inListenDistance(Vec3 const&)const;
};
