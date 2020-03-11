#pragma once

#include "./TriggerDescription.h"


class OnDeathDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnDeathDescription();

    OnDeathDescription();
};
