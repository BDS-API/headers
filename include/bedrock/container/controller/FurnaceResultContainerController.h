#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class FurnaceResultContainerController : ContainerController {

public:
    FurnaceResultContainerController::~FurnaceResultContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    FurnaceResultContainerController(std::shared_ptr<ContainerModel>);
};
