#pragma once

#include "../../../unmapped/Recipes.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class CreativeContainerController : ContainerController {

public:
    virtual ~CreativeContainerController();
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;

    CreativeContainerController(std::shared_ptr<ContainerModel>);
};
