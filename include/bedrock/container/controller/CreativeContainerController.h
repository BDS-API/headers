#pragma once

#include <memory>
#include "ContainerController.h"


class CreativeContainerController : ContainerController {

public:
    ~CreativeContainerController(); // _ZN27CreativeContainerControllerD2Ev
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const; // _ZNK27CreativeContainerController14isItemFilteredERK7RecipesRK18ContainerItemStack
    virtual void getBackgroundStyle(int)const; // _ZNK27CreativeContainerController18getBackgroundStyleEi
    CreativeContainerController(std::shared_ptr<ContainerModel>); // _ZN27CreativeContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
