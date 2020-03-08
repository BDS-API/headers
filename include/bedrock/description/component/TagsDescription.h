#pragma once

#include "../../../json/Value"


class TagsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    TagsDescription::~TagsDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TagsDescription(void);
};
