#pragma once

class WritableBookItem : Item {

public:
    virtual ~WritableBookItem();
    virtual void requiresInteract(void)const;
    virtual void use(ItemStack &, Player &)const;

    void WritableBookItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void makeSureTagIsValid(CompoundTag const&);
    void signBook(ItemStack const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void replacePage(ItemStack const&, int, PageContent const&);
    void addPageAt(ItemStack const&, int, PageContent const&);
    void deletePage(ItemStack const&, int);
    void swapPages(ItemStack const&, int, int);
};
