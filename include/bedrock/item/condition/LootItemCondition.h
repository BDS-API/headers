#pragma once

class LootItemCondition {

public:
    virtual LootItemCondition::~LootItemCondition();

    void deserialize(Json::Value);
    LootItemCondition(void);
};
