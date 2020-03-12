#pragma once

#include "../Description.h"


class ComponentDescription : Description {

public:
    ~ComponentDescription();
    ComponentDescription();
    ComponentDescription(ComponentDescription &&);
};
