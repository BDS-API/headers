#pragma once

#include "../../../json/Value"


class IsShearedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsShearedDescription::~IsShearedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsShearedDescription(void);
};
