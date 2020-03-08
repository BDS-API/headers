#pragma once

#include "../nbt/CompoundTag"
#include "../../unmapped/PageContent"
#include "../actor/Player"


class WritableBookItem : Item {

public:
    virtual WritableBookItem::~WritableBookItem()
    virtual bool requiresInteract()const;
    virtual void use(ItemStack &, Player &)const;
    virtual void getInteractText(Player const&)const;

    WritableBookItem(std::string const&, int);
    void makeSureTagIsValid(CompoundTag const&);
    void signBook(ItemStack const&, std::string, std::string, std::string);
    void replacePage(ItemStack const&, int, PageContent const&);
    void addPageAt(ItemStack const&, int, PageContent const&);
    void deletePage(ItemStack const&, int);
    void swapPages(ItemStack const&, int, int);
};
