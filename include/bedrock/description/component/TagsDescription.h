#pragma once

#include "../../../json/Value.h"
#include "ComponentDescription.h"


class TagsDescription : ComponentDescription {

public:
    ~TagsDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void getJsonName()const;
    virtual void deserializeData(Json::Value &);
    TagsDescription();
};
