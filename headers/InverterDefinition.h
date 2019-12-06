#pragma once

class InverterDefinition : DecoratorDefinition {

public:
    virtual ~InverterDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void InverterDefinition(void);
};
