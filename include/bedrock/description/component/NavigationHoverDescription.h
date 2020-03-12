#pragma once

#include "NavigationDescription.h"


class NavigationHoverDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    ~NavigationHoverDescription();
    NavigationHoverDescription();
};
