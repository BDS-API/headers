#pragma once

class PageContent {

public:
    static long PageContent::BLANK_PAGE;


    void PageContent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void PageContent(void);
    void PageContent(PageContent&&);
    void read(CompoundTag const&);
    void write(PageContent const&, CompoundTag &);
    void createTag(void)const;
    void getType(void)const;
};
