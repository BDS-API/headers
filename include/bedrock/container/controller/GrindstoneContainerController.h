#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class GrindstoneContainerController : ContainerController {

public:
    GrindstoneContainerController::~GrindstoneContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    GrindstoneContainerController(std::shared_ptr<ContainerModel>);
};
