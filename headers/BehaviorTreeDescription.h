#pragma once

class BehaviorTreeDescription : ComponentDescription {

    virtual void getJsonName(void)const;
    virtual ~BehaviorTreeDescription();
    virtual ~BehaviorTreeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}
