#pragma once

class NavigationClimbDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationClimbDescription::~NavigationClimbDescription();

    NavigationClimbDescription(void);
};
