#pragma once

class TeleportDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~TeleportDescription();
    virtual ~TeleportDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
