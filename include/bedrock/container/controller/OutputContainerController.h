#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class OutputContainerController : ContainerController {

public:
    virtual ~OutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    OutputContainerController(std::shared_ptr<ContainerModel>, bool);
};
