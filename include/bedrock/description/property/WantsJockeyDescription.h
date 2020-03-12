#pragma once

#include "PropertyDescription.h"


class WantsJockeyDescription : PropertyDescription {

public:
    virtual void deserializeData(Json::Value &);
    ~WantsJockeyDescription();
    virtual void getJsonName()const;
    virtual void serializeData(Json::Value &)const;
    WantsJockeyDescription();
};
