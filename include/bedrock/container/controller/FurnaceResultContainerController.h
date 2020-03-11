#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class FurnaceResultContainerController : ContainerController {

public:
    virtual ~FurnaceResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    FurnaceResultContainerController(std::shared_ptr<ContainerModel>);
};
