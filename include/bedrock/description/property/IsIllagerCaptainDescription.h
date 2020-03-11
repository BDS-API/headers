#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class IsIllagerCaptainDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~IsIllagerCaptainDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    IsIllagerCaptainDescription();
};
