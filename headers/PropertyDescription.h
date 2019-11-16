#pragma once

class PropertyDescription : Description {

    virtual void getJsonName(void)const;
    virtual ~PropertyDescription();
    virtual ~PropertyDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
