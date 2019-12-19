#pragma once

class EnchantingContainerManagerModel : ContainerManagerModel {

public:
    static long NUM_OPTIONS;

    virtual EnchantingContainerManagerModel::~EnchantingContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    EnchantingContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void recalculateOptions(void);
    bool isTableValid(float);
    void getLapisCount(void);
    void getNewEnchantmentSeed(void);
    void clearOptions(void);
    void _getEnchantmentCost(ItemInstance const&);
    void getShouldBookBeOpen(void)const;
    void setShouldBookBeOpen(bool);
    void getEnchantmentCosts(void)const;
    void getEnchants(void)const;
};
