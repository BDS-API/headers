#pragma once

class SimpleContainer : Container {

public:
    virtual ~SimpleContainer();
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    void SimpleContainer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, int, ContainerType);
    void clearContent(void);
};
