#pragma once

class CollisionBoxDescription : PropertyDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~CollisionBoxDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void CollisionBoxDescription(void);
};
