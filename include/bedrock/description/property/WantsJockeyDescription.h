#pragma once

#include "../../../json/Value.h"
#include "PropertyDescription.h"


class WantsJockeyDescription : PropertyDescription {

public:
    ~WantsJockeyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    WantsJockeyDescription();
};
