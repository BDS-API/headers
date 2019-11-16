#pragma once

class Description {

    virtual void getJsonName(void)const;
    virtual ~Description();
    virtual ~Description();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
