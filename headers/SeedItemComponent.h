#pragma once

class SeedItemComponent {

public:

    void SeedItemComponent(Item &);
    void init(Json::Value &);
    void _parsePlantingBlocks(Json::Value const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void _canPlant(Block const&)const;
    bool canUseOn(Actor &, BlockPos const&, unsigned char)const;
    bool isPlanting(void)const;
};
