#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class CartographyInputContainerController : ContainerController {

public:
    CartographyInputContainerController::~CartographyInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    CartographyInputContainerController(std::shared_ptr<ContainerModel>);
};
