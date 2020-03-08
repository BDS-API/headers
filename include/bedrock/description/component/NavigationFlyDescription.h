#pragma once



class NavigationFlyDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationFlyDescription::~NavigationFlyDescription();

    NavigationFlyDescription(void);
};
