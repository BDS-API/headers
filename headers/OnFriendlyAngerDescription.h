#pragma once

class OnFriendlyAngerDescription : TriggerDescription {

    virtual void getJsonName(void)const;
    virtual ~OnFriendlyAngerDescription();
    virtual ~OnFriendlyAngerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
