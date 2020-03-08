#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class ShulkerBoxContainerController : ContainerController {

public:
    virtual ShulkerBoxContainerController::~ShulkerBoxContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
