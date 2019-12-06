#pragma once

class NpcDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~NpcDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void NpcDescription(void);
};
