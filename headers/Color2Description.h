#pragma once

class Color2Description : ColorDescription {

    virtual void getJsonName(void)const;
    virtual void Color2Description::~Color2Description();
    virtual void Color2Description::~Color2Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
