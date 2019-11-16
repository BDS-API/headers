#pragma once

class OnTargetEscapeDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnTargetEscapeDescription();
    virtual ~OnTargetEscapeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
