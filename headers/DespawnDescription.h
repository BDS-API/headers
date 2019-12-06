#pragma once

class DespawnDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~DespawnDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void DespawnDescription(void);
};
