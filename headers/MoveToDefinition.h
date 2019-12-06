#pragma once

class MoveToDefinition : BehaviorDefinition {

public:
    virtual ~MoveToDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void MoveToDefinition(void);
};
