#pragma once

class PersistentDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~PersistentDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void PersistentDescription(void);
};
