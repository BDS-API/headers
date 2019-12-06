#pragma once

class BehaviorTreeDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~BehaviorTreeDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void BehaviorTreeDescription(void);
};
