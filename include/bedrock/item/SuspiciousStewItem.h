#pragma once



class SuspiciousStewItem : Item {

public:
    virtual SuspiciousStewItem::~SuspiciousStewItem();
    virtual void uniqueAuxValues(void)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;

    void _getStewEffects(void);
    SuspiciousStewItem(std::string const&, short);
    void applyStewEffect(ItemStack const&, Actor &);
};
