#pragma once

#include "../../../json/Value"


class IsIllagerCaptainDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual IsIllagerCaptainDescription::~IsIllagerCaptainDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsIllagerCaptainDescription(void);
};
