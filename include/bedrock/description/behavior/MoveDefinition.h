#pragma once

class MoveDefinition : BehaviorDefinition {

public:
    virtual MoveDefinition::~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveDefinition(void);
};
