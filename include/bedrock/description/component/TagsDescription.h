#pragma once

#include "../../../json/Value"


class TagsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual TagsDescription::~TagsDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TagsDescription(void);
};
