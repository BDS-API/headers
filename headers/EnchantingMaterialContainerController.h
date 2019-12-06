#pragma once

class EnchantingMaterialContainerController : ContainerController {

public:
    virtual ~EnchantingMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
    bool isEnchantMaterialItem(ItemDescriptor const&);
};
