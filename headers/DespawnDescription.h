#pragma once

class DespawnDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~DespawnDescription();
    virtual void ~DespawnDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
