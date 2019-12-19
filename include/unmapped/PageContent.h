#pragma once

class PageContent {

public:
    static long BLANK_PAGE;


    PageContent(std::string);
    PageContent(void);
    PageContent(PageContent&&);
    void read(CompoundTag const&);
    void write(PageContent const&, CompoundTag &);
    void createTag(void)const;
    void getType(void)const;
};
