#pragma once

class EnderEyeItem : Item {

public:
    virtual ~EnderEyeItem();
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;

    void EnderEyeItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
