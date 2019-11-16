#pragma once

class CollisionBoxDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~CollisionBoxDescription();
    virtual ~CollisionBoxDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
