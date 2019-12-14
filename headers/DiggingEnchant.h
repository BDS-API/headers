#pragma once

class DiggingEnchant : Enchant {

public:
    virtual ~DiggingEnchant();
    virtual void getMinCost(int)const;
    virtual void getMaxCost(int)const;
    virtual void getMaxLevel(void)const;

    void DiggingEnchant(Enchant::Type, Enchant::Frequency, std::string const&, std::string const&, int, int);
};
