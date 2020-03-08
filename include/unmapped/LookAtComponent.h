#pragma once

#include "../bedrock/actor/Actor"


class LookAtComponent {

public:

    LookAtComponent(LookAtComponent&&);
    LookAtComponent(void);
    void initFromDefinition(Actor &, LookAtDefinition const&);
    void getTarget(void)const;
    void getSearchRadius(void)const;
    void getCoolingTime(void);
    bool isLookingAtMe(Actor &, Actor &);
};
