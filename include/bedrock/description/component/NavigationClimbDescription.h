#pragma once

#include "./NavigationDescription.h"


class NavigationClimbDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    virtual ~NavigationClimbDescription();

    NavigationClimbDescription();
};
