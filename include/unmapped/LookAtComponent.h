#pragma once

#include "../bedrock/definition/LookAtDefinition"
#include "../bedrock/actor/Actor"


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
