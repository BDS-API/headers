#pragma once

#include <string>
#include "Item.h"


class WritableBookItem : Item {

public:
    ~WritableBookItem(); // _ZN16WritableBookItemD2Ev
    virtual bool requiresInteract()const; // _ZNK16WritableBookItem16requiresInteractEv
    virtual void use(ItemStack &, Player &)const; // _ZNK16WritableBookItem3useER9ItemStackR6Player
    virtual std::string getInteractText(Player const&)const; // _ZNK16WritableBookItem15getInteractTextB5cxx11ERK6Player
    WritableBookItem(std::string const&, int); // _ZN16WritableBookItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void makeSureTagIsValid(CompoundTag const&); // _ZN16WritableBookItem18makeSureTagIsValidERK11CompoundTag
    void signBook(ItemStack const&, std::string, std::string, std::string); // _ZN16WritableBookItem8signBookERK9ItemStackNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_S8_
    void replacePage(ItemStack const&, int, PageContent const&); // _ZN16WritableBookItem11replacePageERK9ItemStackiRK11PageContent
    void addPageAt(ItemStack const&, int, PageContent const&); // _ZN16WritableBookItem9addPageAtERK9ItemStackiRK11PageContent
    void deletePage(ItemStack const&, int); // _ZN16WritableBookItem10deletePageERK9ItemStacki
    void swapPages(ItemStack const&, int, int); // _ZN16WritableBookItem9swapPagesERK9ItemStackii
};
