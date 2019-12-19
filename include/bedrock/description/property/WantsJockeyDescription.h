#pragma once

class WantsJockeyDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual WantsJockeyDescription::~WantsJockeyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    WantsJockeyDescription(void);
};
