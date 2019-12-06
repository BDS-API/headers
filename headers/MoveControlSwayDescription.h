#pragma once

class MoveControlSwayDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~MoveControlSwayDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void MoveControlSwayDescription(void);
};
