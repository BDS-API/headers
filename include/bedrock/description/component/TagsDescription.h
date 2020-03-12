#pragma once

#include "ComponentDescription.h"


class TagsDescription : ComponentDescription {

public:
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
    ~TagsDescription();
    virtual void getJsonName()const;
    TagsDescription();
};
