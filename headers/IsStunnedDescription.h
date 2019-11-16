#pragma once

class IsStunnedDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual ~IsStunnedDescription();
    virtual ~IsStunnedDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
