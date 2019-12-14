#pragma once

class SuspiciousStewItem : Item {

public:
    virtual ~SuspiciousStewItem();
    virtual void uniqueAuxValues(void)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;

    void _getStewEffects(void);
    void SuspiciousStewItem(std::string const&, short);
    void applyStewEffect(ItemStack const&, Actor &);
};
