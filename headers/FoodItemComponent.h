#pragma once

class FoodItemComponent {

public:

    void FoodItemComponent(Item &);
    void init(Json::Value &);
    void _getActionEnum(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void _getCooldownTypeEnum(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void _loadEffects(Json::Value &);
    void _loadRemoveEffects(Json::Value &);
    void getNutrition(void)const;
    void getSaturationModifier(void)const;
    void use(ItemStack &, Player &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void eatItem(ItemStack &, Actor &, Level &);
    void useTimeDepleted(ItemStack &, Player &, Level &);
    void _applyEatEffects(ItemStack const&, Actor &, Level &);
    void _applyOnUseAction(ItemStack const&, Actor &, Level &);
    void getCoolDownType(void)const;
    void getCoolDownTime(void)const;
};
