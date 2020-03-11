#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class GrindstoneContainerController : ContainerController {

public:
    virtual ~GrindstoneContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    GrindstoneContainerController(std::shared_ptr<ContainerModel>);
};
