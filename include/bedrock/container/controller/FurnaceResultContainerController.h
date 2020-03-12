#pragma once

#include <memory>
#include "ContainerController.h"


class FurnaceResultContainerController : ContainerController {

public:
    ~FurnaceResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    FurnaceResultContainerController(std::shared_ptr<ContainerModel>);
};
