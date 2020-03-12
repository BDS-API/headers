#pragma once

#include "ItemStack.h"
#include <string>
#include "../../unmapped/PageContent.h"
#include "../nbt/CompoundTag.h"
#include "../actor/Player.h"
#include "Item.h"


class WritableBookItem : Item {

public:
    virtual void use(ItemStack &, Player &)const;
    ~WritableBookItem();
    virtual bool requiresInteract()const;
    virtual std::string getInteractText(Player const&)const;
    void makeSureTagIsValid(CompoundTag const&);
    void swapPages(ItemStack const&, int, int);
    void addPageAt(ItemStack const&, int, PageContent const&);
    void deletePage(ItemStack const&, int);
    void signBook(ItemStack const&, std::string, std::string, std::string);
    WritableBookItem(std::string const&, int);
    void replacePage(ItemStack const&, int, PageContent const&);
};
