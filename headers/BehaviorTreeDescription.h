#pragma once

class BehaviorTreeDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual void BehaviorTreeDescription::~BehaviorTreeDescription();
    virtual void BehaviorTreeDescription::~BehaviorTreeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
