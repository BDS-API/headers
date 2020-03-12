#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class LoomDyeContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~LoomDyeContainerController();
    LoomDyeContainerController(std::shared_ptr<ContainerModel>);
};
