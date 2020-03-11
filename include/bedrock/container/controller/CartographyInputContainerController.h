#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class CartographyInputContainerController : ContainerController {

public:
    virtual ~CartographyInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    CartographyInputContainerController(std::shared_ptr<ContainerModel>);
};
