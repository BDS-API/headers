#pragma once

class NpcDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~NpcDescription();
    virtual ~NpcDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
