#pragma once

class LootItemFunction {

public:
    static long LootItemFunction::mLootingFunctions;

    virtual ~LootItemFunction();
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void getConditions(void)const;
    void deserialize(Json::Value);
    void LootItemFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
