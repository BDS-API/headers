#pragma once

class WantsJockeyDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~WantsJockeyDescription();
    virtual void ~WantsJockeyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
