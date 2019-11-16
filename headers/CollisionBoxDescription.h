#pragma once

class CollisionBoxDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void CollisionBoxDescription::~CollisionBoxDescription();
    virtual void CollisionBoxDescription::~CollisionBoxDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
