#pragma once

class NavigationWalkDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationWalkDescription::~NavigationWalkDescription();

    NavigationWalkDescription(void);
};
