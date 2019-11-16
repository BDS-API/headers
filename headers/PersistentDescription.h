#pragma once

class PersistentDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void ~PersistentDescription();
    virtual void ~PersistentDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
