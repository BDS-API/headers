#pragma once

#include <string>
#include "Item.h"


class WritableBookItem : Item {

public:
    ~WritableBookItem();
    virtual bool requiresInteract()const;
    virtual std::string getInteractText(Player const&)const;
    virtual void use(ItemStack &, Player &)const;
    void deletePage(ItemStack const&, int);
    void signBook(ItemStack const&, std::string, std::string, std::string);
    void addPageAt(ItemStack const&, int, PageContent const&);
    void swapPages(ItemStack const&, int, int);
    void replacePage(ItemStack const&, int, PageContent const&);
    WritableBookItem(std::string const&, int);
    void makeSureTagIsValid(CompoundTag const&);
};
