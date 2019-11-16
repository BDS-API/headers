#pragma once

class SetDataFromColorIndexFunction : LootItemFunction {

    virtual void SetDataFromColorIndexFunction::~SetDataFromColorIndexFunction();
    virtual void SetDataFromColorIndexFunction::~SetDataFromColorIndexFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
}
