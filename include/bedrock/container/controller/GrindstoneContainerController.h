#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class GrindstoneContainerController : ContainerController {

public:
    virtual GrindstoneContainerController::~GrindstoneContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    GrindstoneContainerController(std::shared_ptr<ContainerModel>);
};
