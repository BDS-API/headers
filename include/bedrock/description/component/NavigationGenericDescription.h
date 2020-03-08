#pragma once



class NavigationGenericDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    virtual NavigationGenericDescription::~NavigationGenericDescription()

    NavigationGenericDescription(void);
};
