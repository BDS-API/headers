#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class CompoundCreatorInputContainerController : ContainerController {

public:
    CompoundCreatorInputContainerController::~CompoundCreatorInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
