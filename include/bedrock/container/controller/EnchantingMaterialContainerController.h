#pragma once

#include <memory>
#include "ContainerController.h"


class EnchantingMaterialContainerController : public ContainerController {

public:
    virtual ~EnchantingMaterialContainerController(); // _ZN37EnchantingMaterialContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK37EnchantingMaterialContainerController13isItemAllowedERK12ItemInstance
    EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>); // _ZN37EnchantingMaterialContainerControllerC2ESt10shared_ptrI14ContainerModelE
    bool isEnchantMaterialItem(ItemDescriptor const&); // _ZN37EnchantingMaterialContainerController21isEnchantMaterialItemERK14ItemDescriptor
};
