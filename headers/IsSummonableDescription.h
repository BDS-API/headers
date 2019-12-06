#pragma once

class IsSummonableDescription : DefintionDescription {

public:
    virtual ~IsSummonableDescription();
    virtual void getJsonName(void)const;

    void IsSummonableDescription(void);
    void IsSummonableDescription(IsSummonableDescription&&);
    void parse(Json::Value &);
};
