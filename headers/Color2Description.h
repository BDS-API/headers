#pragma once

class Color2Description : ColorDescription {

    virtual void getJsonName(void)const;
    virtual ~Color2Description();
    virtual ~Color2Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
