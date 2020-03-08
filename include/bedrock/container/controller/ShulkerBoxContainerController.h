#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class ShulkerBoxContainerController : ContainerController {

public:
    ShulkerBoxContainerController::~ShulkerBoxContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    ShulkerBoxContainerController(std::shared_ptr<ContainerModel>);
};
