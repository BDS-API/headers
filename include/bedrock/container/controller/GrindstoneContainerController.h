#pragma once

#include <memory>
#include "ContainerController.h"


class GrindstoneContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~GrindstoneContainerController();
    GrindstoneContainerController(std::shared_ptr<ContainerModel>);
};
