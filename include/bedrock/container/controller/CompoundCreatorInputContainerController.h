#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class CompoundCreatorInputContainerController : ContainerController {

public:
    virtual ~CompoundCreatorInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
