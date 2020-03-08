#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class CartographyInputContainerController : ContainerController {

public:
    virtual CartographyInputContainerController::~CartographyInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    CartographyInputContainerController(std::shared_ptr<ContainerModel>);
};
