#pragma once

class OnHurtDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual OnHurtDescription::~OnHurtDescription();

    OnHurtDescription(void);
};
