#pragma once

#include "NavigationDescription.h"


class NavigationFlyDescription : NavigationDescription {

public:
    ~NavigationFlyDescription();
    virtual void getJsonName()const;
    NavigationFlyDescription();
};
