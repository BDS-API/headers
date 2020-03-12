#pragma once

#include <memory>
#include "ContainerController.h"


class LoomDyeContainerController : ContainerController {

public:
    ~LoomDyeContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    LoomDyeContainerController(std::shared_ptr<ContainerModel>);
};
