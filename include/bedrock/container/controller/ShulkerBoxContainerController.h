#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class ShulkerBoxContainerController : ContainerController {

public:
    virtual ~ShulkerBoxContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
