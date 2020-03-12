#pragma once

#include <memory>
#include "ContainerController.h"


class ShulkerBoxContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~ShulkerBoxContainerController();
    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
