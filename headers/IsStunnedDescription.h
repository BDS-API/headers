#pragma once

class IsStunnedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~IsStunnedDescription();
    virtual void ~IsStunnedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
