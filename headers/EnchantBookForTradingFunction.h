#pragma once

class EnchantBookForTradingFunction : LootItemFunction {

    virtual void EnchantBookForTradingFunction::~EnchantBookForTradingFunction();
    virtual void EnchantBookForTradingFunction::~EnchantBookForTradingFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
