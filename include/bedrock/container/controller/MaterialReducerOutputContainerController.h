#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class MaterialReducerOutputContainerController : ContainerController {

public:
    virtual MaterialReducerOutputContainerController::~MaterialReducerOutputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);
};
