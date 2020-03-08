#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class OutputContainerController : ContainerController {

public:
    virtual OutputContainerController::~OutputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    OutputContainerController(std::shared_ptr<ContainerModel>, bool);
};
