#pragma once

class ComponentDescription : Description {

public:
    virtual ComponentDescription::~ComponentDescription();

    ComponentDescription(void);
    ComponentDescription(ComponentDescription&&);
};
