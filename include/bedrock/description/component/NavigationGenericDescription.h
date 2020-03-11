#pragma once

#include "./NavigationDescription.h"


class NavigationGenericDescription : NavigationDescription {

public:
    virtual void getJsonName()const;
    virtual ~NavigationGenericDescription();

    NavigationGenericDescription();
};
