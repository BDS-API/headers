#pragma once

#include "../../../json/Value.h"
#include "./ComponentDescription.h"


class TagsDescription : ComponentDescription {

public:
    virtual void getJsonName()const;
    virtual ~TagsDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    TagsDescription();
};
