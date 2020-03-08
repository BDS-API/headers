#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class LoomDyeContainerController : ContainerController {

public:
    LoomDyeContainerController::~LoomDyeContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomDyeContainerController(std::shared_ptr<ContainerModel>);
};
