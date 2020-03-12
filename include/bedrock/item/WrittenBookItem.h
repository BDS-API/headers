#pragma once

#include <memory>
#include "Item.h"
#include <string>


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

    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool requiresInteract()const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~WrittenBookItem();
    virtual std::string getInteractText(Player const&)const;
    virtual void use(ItemStack &, Player &)const;
    WrittenBookItem(std::string const&, int);
    bool canBeCopied(std::unique_ptr<CompoundTag> const&);
    std::string getTitle(ItemStack const&);
    void getGeneration(std::unique_ptr<CompoundTag> const&);
    std::string getBookId(ItemStack const&);
    void resolvedBookComponents(ItemStack const&, Player const&);
    void getPages(ItemStack const&);
    void getPageCount(ItemStack const&);
    std::string getAuthor(ItemStack const&);
    std::string getXUID(ItemStack const&);
    void getPageCountByType(ItemStack const&);
    void makeSureTagIsValid(CompoundTag const&);
};
