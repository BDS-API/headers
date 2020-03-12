#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class IsIllagerCaptainDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    ~IsIllagerCaptainDescription();
    virtual void serializeData(Json::Value &)const;
    IsIllagerCaptainDescription();
};
