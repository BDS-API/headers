#pragma once

#include "NavigationDescription.h"


class NavigationClimbDescription : NavigationDescription {

public:
    ~NavigationClimbDescription();
    virtual void getJsonName()const;
    NavigationClimbDescription();
};
