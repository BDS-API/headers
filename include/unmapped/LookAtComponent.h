#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/definition/LookAtDefinition"


class LookAtComponent {

public:

    LookAtComponent(LookAtComponent&&);
    LookAtComponent(void);
    void initFromDefinition(Actor &, LookAtDefinition const&);
    void getTarget()const;
    void getSearchRadius()const;
    void getCoolingTime();
    bool isLookingAtMe(Actor &, Actor &);
};
