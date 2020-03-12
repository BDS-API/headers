#pragma once

#include <memory>
#include "ContainerController.h"


class CompoundCreatorInputContainerController : ContainerController {

public:
    ~CompoundCreatorInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
