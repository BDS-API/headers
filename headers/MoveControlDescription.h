#pragma once

class MoveControlDescription : ComponentDescription {

public:
    virtual ~MoveControlDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;

    void MoveControlDescription(void);
};
