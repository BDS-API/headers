#pragma once



class LookAtComponent {

public:
    bool isLookingAtMe(Actor &, Actor &);
    void initFromDefinition(Actor &, LookAtDefinition const&);
    LookAtComponent();
    void getSearchRadius()const;
    void getCoolingTime();
    void getTarget()const;
    LookAtComponent(LookAtComponent &&);
};
