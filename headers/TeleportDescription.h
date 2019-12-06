#pragma once

class TeleportDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~TeleportDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TeleportDescription(void);
};
