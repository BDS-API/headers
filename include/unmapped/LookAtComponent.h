#pragma once

#include "../bedrock/actor/Actor.h"
#include "./LookAtComponent.h"
#include "../bedrock/definition/LookAtDefinition.h"


class LookAtComponent {

public:

    LookAtComponent(LookAtComponent &&);
    LookAtComponent();
    void initFromDefinition(Actor &, LookAtDefinition const&);
    void getTarget()const;
    void getSearchRadius()const;
    void getCoolingTime();
    bool isLookingAtMe(Actor &, Actor &);
};
