#pragma once

#include <memory>
#include "ContainerController.h"


class OutputContainerController : ContainerController {

public:
    ~OutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    OutputContainerController(std::shared_ptr<ContainerModel>, bool);
};
