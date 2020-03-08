#pragma once

#include "../bedrock/nbt/CompoundTag"


class PageContent {

public:
    static long BLANK_PAGE;


    PageContent(std::string);
    PageContent(void);
    PageContent(PageContent&&);
    void read(CompoundTag const&);
    void write(PageContent const&, CompoundTag &);
    void createTag()const;
    void getType()const;
};
