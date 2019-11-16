#pragma once

class OnTargetEscapeDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual void ~OnTargetEscapeDescription();
    virtual void ~OnTargetEscapeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
