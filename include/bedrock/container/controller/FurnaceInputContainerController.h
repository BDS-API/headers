#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceInputContainerController : public ContainerController {

public:
    virtual ~FurnaceInputContainerController(); // _ZN31FurnaceInputContainerControllerD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK31FurnaceInputContainerController13isItemAllowedERK12ItemInstance
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const; // _ZNK31FurnaceInputContainerController14isItemFilteredERK7RecipesRK18ContainerItemStack
    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&); // _ZN31FurnaceInputContainerControllerC2ESt10shared_ptrI14ContainerModelERKN4Util10HashStringE
};
