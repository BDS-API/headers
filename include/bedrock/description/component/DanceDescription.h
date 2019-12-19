#pragma once

class DanceDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual DanceDescription::~DanceDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

};
