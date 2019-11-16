#pragma once

class PushableDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~PushableDescription();
    virtual ~PushableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
