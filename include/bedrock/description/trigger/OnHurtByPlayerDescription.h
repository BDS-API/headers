#pragma once



class OnHurtByPlayerDescription : TriggerDescription {

public:
    virtual void getJsonName(void)const;
    virtual OnHurtByPlayerDescription::~OnHurtByPlayerDescription();

    OnHurtByPlayerDescription(void);
};
