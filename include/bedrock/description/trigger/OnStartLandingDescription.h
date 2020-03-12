#pragma once

#include "TriggerDescription.h"


class OnStartLandingDescription : TriggerDescription {

public:
    ~OnStartLandingDescription();
    virtual void getJsonName()const;
    OnStartLandingDescription();
};
