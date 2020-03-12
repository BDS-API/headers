#pragma once

#include "NavigationDescription.h"


class NavigationHoverDescription : NavigationDescription {

public:
    ~NavigationHoverDescription();
    virtual void getJsonName()const;
    NavigationHoverDescription();
};
