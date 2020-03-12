#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceInputContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    ~FurnaceInputContainerController();
    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
