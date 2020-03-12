#pragma once

#include "NavigationDescription.h"


class NavigationFlyDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    ~NavigationFlyDescription();
    NavigationFlyDescription();
};
