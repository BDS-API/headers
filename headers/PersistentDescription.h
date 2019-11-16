#pragma once

class PersistentDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void PersistentDescription::~PersistentDescription();
    virtual void PersistentDescription::~PersistentDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
