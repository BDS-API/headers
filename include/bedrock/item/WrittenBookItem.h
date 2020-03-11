#pragma once

#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "./Item.h"
#include "../level/Level.h"
#include "../actor/Player.h"
#include "../nbt/CompoundTag.h"
#include "./ItemStack.h"
#include "unmapped/ItemDescriptor.h"


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
    virtual bool requiresInteract()const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;
    virtual void use(ItemStack &, Player &)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual std::string getInteractText(Player const&)const;

    WrittenBookItem(std::string const&, int);
    void makeSureTagIsValid(CompoundTag const&);
    void getPages(ItemStack const&);
    void getPageCount(ItemStack const&);
    void getPageCountByType(ItemStack const&);
    std::string getTitle(ItemStack const&);
    std::string getAuthor(ItemStack const&);
    std::string getXUID(ItemStack const&);
    void getGeneration(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    std::string getBookId(ItemStack const&);
    bool canBeCopied(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void resolvedBookComponents(ItemStack const&, Player const&);
};
