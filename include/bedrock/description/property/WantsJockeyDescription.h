#pragma once

#include "../../../json/Value"


class WantsJockeyDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    WantsJockeyDescription::~WantsJockeyDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WantsJockeyDescription(void);
};
