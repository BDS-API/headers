#pragma once

#include "./TriggerDescription.h"


class OnTargetEscapeDescription : TriggerDescription {

public:
    virtual void getJsonName()const;
    virtual ~OnTargetEscapeDescription();

    OnTargetEscapeDescription();
};
