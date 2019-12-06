#pragma once

class LootItemCondition {

public:
    virtual ~LootItemCondition();

    void deserialize(Json::Value);
    void LootItemCondition(void);
};
