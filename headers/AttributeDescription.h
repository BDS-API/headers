#pragma once

class AttributeDescription : Description {

    virtual void getJsonName(void)const;
    virtual ~AttributeDescription();
    virtual ~AttributeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
