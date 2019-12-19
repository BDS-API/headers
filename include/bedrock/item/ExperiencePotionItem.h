#pragma once

class ExperiencePotionItem : Item {

public:
    virtual ExperiencePotionItem::~ExperiencePotionItem();
    virtual bool isGlint(ItemStackBase const&)const;
    virtual bool isThrowable(void)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;

    ExperiencePotionItem(std::string const&, int);
};
