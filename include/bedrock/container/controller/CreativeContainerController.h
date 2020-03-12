#pragma once

#include <memory>
#include "ContainerController.h"


class CreativeContainerController : ContainerController {

public:
    virtual void getBackgroundStyle(int)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    ~CreativeContainerController();
    CreativeContainerController(std::shared_ptr<ContainerModel>);
};
