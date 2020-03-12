#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class CartographyInputContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~CartographyInputContainerController();
    CartographyInputContainerController(std::shared_ptr<ContainerModel>);
};
