#pragma once

class LootItemCondition {

    virtual void ~LootItemCondition();
    virtual void ~LootItemCondition();
    virtual void applies(Random &, LootTableContext &);
}
