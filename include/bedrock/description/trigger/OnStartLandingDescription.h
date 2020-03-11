#pragma once

#include "./TriggerDescription.h"


class OnStartLandingDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnStartLandingDescription();

    OnStartLandingDescription();
};
