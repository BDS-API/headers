#pragma once

class TeleportDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void TeleportDescription::~TeleportDescription();
    virtual void TeleportDescription::~TeleportDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
