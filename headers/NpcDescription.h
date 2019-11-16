#pragma once

class NpcDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~NpcDescription();
    virtual void ~NpcDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
