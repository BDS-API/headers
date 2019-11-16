#pragma once

class TagsDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TagsDescription();
    virtual ~TagsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
