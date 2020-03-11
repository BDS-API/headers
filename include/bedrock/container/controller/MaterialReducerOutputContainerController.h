#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class MaterialReducerOutputContainerController : ContainerController {

public:
    virtual ~MaterialReducerOutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);
};
