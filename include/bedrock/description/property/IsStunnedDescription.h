#pragma once

#include "../../../json/Value"


class IsStunnedDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual IsStunnedDescription::~IsStunnedDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsStunnedDescription(void);
};
