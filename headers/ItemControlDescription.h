#pragma once

class ItemControlDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~ItemControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void ItemControlDescription(void);
};
