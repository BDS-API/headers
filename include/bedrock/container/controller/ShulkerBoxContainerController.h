#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class ShulkerBoxContainerController : ContainerController {

public:
    ~ShulkerBoxContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
