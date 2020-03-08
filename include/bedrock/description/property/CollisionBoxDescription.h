#pragma once

#include "../../../json/Value"


class CollisionBoxDescription : PropertyDescription {

public:
    virtual void getJsonName()const;
    virtual CollisionBoxDescription::~CollisionBoxDescription()
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    CollisionBoxDescription(void);
};
