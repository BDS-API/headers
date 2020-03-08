#pragma once



class NavigationFloatDescription : NavigationDescription {

public:
    virtual void getJsonName(void)const;
    virtual NavigationFloatDescription::~NavigationFloatDescription();

    NavigationFloatDescription(void);
};
