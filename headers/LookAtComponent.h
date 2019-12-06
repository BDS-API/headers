#pragma once

class LookAtComponent {

public:

    void LookAtComponent(LookAtComponent&&);
    void LookAtComponent(void);
    void initFromDefinition(Actor &, LookAtDefinition const&);
    void getTarget(void)const;
    void getSearchRadius(void)const;
    void getCoolingTime(void);
    bool isLookingAtMe(Actor &, Actor &);
};
