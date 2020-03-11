#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class LoomDyeContainerController : ContainerController {

public:
    virtual ~LoomDyeContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomDyeContainerController(std::shared_ptr<ContainerModel>);
};
