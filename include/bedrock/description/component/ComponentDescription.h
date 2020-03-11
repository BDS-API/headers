#pragma once

#include "../Description.h"
#include "./ComponentDescription.h"


class ComponentDescription : Description {

public:
    virtual ~ComponentDescription();

    ComponentDescription();
    ComponentDescription(ComponentDescription &&);
};
