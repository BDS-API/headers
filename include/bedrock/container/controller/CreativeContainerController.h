#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../../unmapped/Recipes.h"


class CreativeContainerController : ContainerController {

public:
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    ~CreativeContainerController();
    CreativeContainerController(std::shared_ptr<ContainerModel>);
};
