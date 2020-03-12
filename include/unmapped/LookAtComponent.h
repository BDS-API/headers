#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/definition/LookAtDefinition.h"


class LookAtComponent {

public:
    void initFromDefinition(Actor &, LookAtDefinition const&);
    void getCoolingTime();
    bool isLookingAtMe(Actor &, Actor &);
    void getSearchRadius()const;
    LookAtComponent(LookAtComponent &&);
    void getTarget()const;
    LookAtComponent();
};
