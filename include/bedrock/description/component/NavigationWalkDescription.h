#pragma once

#include "NavigationDescription.h"


class NavigationWalkDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    ~NavigationWalkDescription();
    NavigationWalkDescription();
};
