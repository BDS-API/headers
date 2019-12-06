#pragma once

class MoveDefinition : BehaviorDefinition {

public:
    virtual ~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void MoveDefinition(void);
};
