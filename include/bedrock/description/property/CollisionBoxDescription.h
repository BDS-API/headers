#pragma once

#include "./PropertyDescription.h"
#include "../../../json/Value.h"


class CollisionBoxDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual ~CollisionBoxDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CollisionBoxDescription();
};
