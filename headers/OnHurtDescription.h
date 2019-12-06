#pragma once

class OnHurtDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~OnHurtDescription();

    void OnHurtDescription(void);
};
