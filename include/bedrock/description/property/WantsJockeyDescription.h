#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class WantsJockeyDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~WantsJockeyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WantsJockeyDescription();
};
