#pragma once

#include "NavigationDescription.h"


class NavigationGenericDescription : NavigationDescription {

public:
    ~NavigationGenericDescription();
    virtual void getJsonName()const;
    NavigationGenericDescription();
};
