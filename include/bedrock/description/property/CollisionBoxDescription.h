#pragma once

#include "PropertyDescription.h"


class CollisionBoxDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    ~CollisionBoxDescription();
    virtual void serializeData(Json::Value &)const;
    virtual void deserializeData(Json::Value &);
    CollisionBoxDescription();
};
