#pragma once

class TrailDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual TrailDescription::~TrailDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TrailDescription(void);
};
