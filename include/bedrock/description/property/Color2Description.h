#pragma once

class Color2Description : ColorDescription {

public:
    virtual void getJsonName(void)const;
    virtual Color2Description::~Color2Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    Color2Description(void);
};
