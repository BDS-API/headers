#pragma once

#include <memory>
#include "ContainerController.h"


class CartographyInputContainerController : ContainerController {

public:
    ~CartographyInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    CartographyInputContainerController(std::shared_ptr<ContainerModel>);
};
