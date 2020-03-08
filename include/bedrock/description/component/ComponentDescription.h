#pragma once

#include "../Description"


class ComponentDescription : Description {

public:
    ComponentDescription::~ComponentDescription()

    ComponentDescription(void);
    ComponentDescription(ComponentDescription&&);
};
