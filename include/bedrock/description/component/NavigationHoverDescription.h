#pragma once

class NavigationHoverDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationHoverDescription::~NavigationHoverDescription();

    NavigationHoverDescription(void);
};
