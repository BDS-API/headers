#pragma once

#include <memory>
#include "ContainerController.h"


class MaterialReducerOutputContainerController : ContainerController {

public:
    ~MaterialReducerOutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);
};
