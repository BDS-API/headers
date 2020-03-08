#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class MaterialReducerOutputContainerController : ContainerController {

public:
    MaterialReducerOutputContainerController::~MaterialReducerOutputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);
};
