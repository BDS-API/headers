#pragma once

class SlimeMoveControlDescription : MoveControlDescription {

public:
    virtual void getJsonName(void)const;
    virtual ~SlimeMoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void SlimeMoveControlDescription(void);
};
