#pragma once

#include "../../../json/Value"


class StrengthDescription : AttributeDescription {

public:
    virtual void getJsonName(void)const;
    virtual StrengthDescription::~StrengthDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    StrengthDescription(void);
};
