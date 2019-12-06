#pragma once

class TriggerDescription : Description {

public:
    virtual ~TriggerDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void TriggerDescription(void);
    void parseTrigger(Json::Value &);
};
