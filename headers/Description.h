#pragma once

class Description {

    virtual void getJsonName(void)const;
    virtual void ~Description();
    virtual void ~Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
