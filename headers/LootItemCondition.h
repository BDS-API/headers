#pragma once

class LootItemCondition {

    virtual ~LootItemCondition();
    virtual ~LootItemCondition();
    virtual void applies(Random &, LootTableContext &);
}
