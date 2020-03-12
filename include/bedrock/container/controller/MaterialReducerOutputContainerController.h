#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class MaterialReducerOutputContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~MaterialReducerOutputContainerController();
    MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);
};
