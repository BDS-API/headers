#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class CompoundCreatorInputContainerController : ContainerController {

public:
    ~CompoundCreatorInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
