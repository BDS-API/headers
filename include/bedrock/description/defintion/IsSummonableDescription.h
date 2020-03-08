#pragma once

#include "../../../json/Value"


class IsSummonableDescription : DefintionDescription {

public:
    virtual IsSummonableDescription::~IsSummonableDescription();
    virtual void getJsonName(void)const;

    IsSummonableDescription(void);
    IsSummonableDescription(IsSummonableDescription&&);
    void parse(Json::Value &);
};
