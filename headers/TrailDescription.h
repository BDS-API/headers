#pragma once

class TrailDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TrailDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TrailDescription(void);
};
