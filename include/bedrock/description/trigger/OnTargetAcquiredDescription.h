#pragma once

class OnTargetAcquiredDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual OnTargetAcquiredDescription::~OnTargetAcquiredDescription();

    OnTargetAcquiredDescription(void);
};
