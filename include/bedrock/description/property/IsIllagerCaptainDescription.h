#pragma once

#include "PropertyDescription.h"


class IsIllagerCaptainDescription : PropertyDescription {

public:
    virtual void serializeData(Json::Value &)const;
    ~IsIllagerCaptainDescription();
    virtual void deserializeData(Json::Value &);
    virtual void getJsonName()const;
    IsIllagerCaptainDescription();
};
