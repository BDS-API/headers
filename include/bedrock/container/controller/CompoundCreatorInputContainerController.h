#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class CompoundCreatorInputContainerController : ContainerController {

public:
    virtual CompoundCreatorInputContainerController::~CompoundCreatorInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
