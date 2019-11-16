#pragma once

class PersistentDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~PersistentDescription();
    virtual ~PersistentDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
