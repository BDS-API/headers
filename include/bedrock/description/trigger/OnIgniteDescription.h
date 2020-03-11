#pragma once

#include "./TriggerDescription.h"


class OnIgniteDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnIgniteDescription();

    OnIgniteDescription();
};
