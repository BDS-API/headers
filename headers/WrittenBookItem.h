#pragma once

class WrittenBookItem : Item {

public:
    static long MAX_TITLE_LENGTH;
    static long MAX_PAGE_LENGTH;
    static long MAX_PAGES;
    static long MAX_GENERATION;
    static long TAG_TITLE;
    static long TAG_AUTHOR;
    static long TAG_XUID;
    static long TAG_PAGES;
    static long TAG_PAGE_TEXT;
    static long TAG_GENERATION;
    static long TAG_RESOLVED;
    static long TAG_PAGE_PHOTO_NAME;
    static long TAG_ID;

    virtual ~WrittenBookItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual void requiresInteract(void)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void buildDescriptionId[abi:cxx11](ItemDescriptor const&,std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>> const&)const;
    virtual void getInteractText[abi:cxx11](Player const&)const;

    void WrittenBookItem(std::string const&, int);
    void makeSureTagIsValid(CompoundTag const&);
    void getPages(ItemStack const&);
    void getPageCount(ItemStack const&);
    void getPageCountByType(ItemStack const&);
    void getGeneration(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    bool canBeCopied(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void resolvedBookComponents(ItemStack const&, Player const&);
};
