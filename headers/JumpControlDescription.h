#pragma once

class JumpControlDescription : ComponentDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~JumpControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void JumpControlDescription(void);
};
