#pragma once

#include <string>
#include <memory>
#include "Item.h"


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

    ~WrittenBookItem(); // _ZN15WrittenBookItemD2Ev
    virtual bool isGlint(ItemStackBase const&)const; // _ZNK15WrittenBookItem7isGlintERK13ItemStackBase
    virtual bool requiresInteract()const; // _ZNK15WrittenBookItem16requiresInteractEv
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const; // _ZNK15WrittenBookItem24appendFormattedHovertextERK13ItemStackBaseR5LevelRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    virtual void use(ItemStack &, Player &)const; // _ZNK15WrittenBookItem3useER9ItemStackR6Player
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK15WrittenBookItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual std::string getInteractText(Player const&)const; // _ZNK15WrittenBookItem15getInteractTextB5cxx11ERK6Player
    WrittenBookItem(std::string const&, int); // _ZN15WrittenBookItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void makeSureTagIsValid(CompoundTag const&); // _ZN15WrittenBookItem18makeSureTagIsValidERK11CompoundTag
    void getPages(ItemStack const&); // _ZN15WrittenBookItem8getPagesERK9ItemStack
    void getPageCount(ItemStack const&); // _ZN15WrittenBookItem12getPageCountERK9ItemStack
    void getPageCountByType(ItemStack const&); // _ZN15WrittenBookItem18getPageCountByTypeERK9ItemStack
    std::string getTitle(ItemStack const&); // _ZN15WrittenBookItem8getTitleB5cxx11ERK9ItemStack
    std::string getAuthor(ItemStack const&); // _ZN15WrittenBookItem9getAuthorB5cxx11ERK9ItemStack
    std::string getXUID(ItemStack const&); // _ZN15WrittenBookItem7getXUIDB5cxx11ERK9ItemStack
    void getGeneration(std::unique_ptr<CompoundTag> const&); // _ZN15WrittenBookItem13getGenerationERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    std::string getBookId(ItemStack const&); // _ZN15WrittenBookItem9getBookIdB5cxx11ERK9ItemStack
    bool canBeCopied(std::unique_ptr<CompoundTag> const&); // _ZN15WrittenBookItem11canBeCopiedERKSt10unique_ptrI11CompoundTagSt14default_deleteIS1_EE
    void resolvedBookComponents(ItemStack const&, Player const&); // _ZN15WrittenBookItem22resolvedBookComponentsERK9ItemStackRK6Player
};
