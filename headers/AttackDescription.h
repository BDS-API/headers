#pragma once

class AttackDescription : AttributeDescription {

    virtual void getJsonName(void)const;
    virtual ~AttackDescription();
    virtual ~AttackDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
