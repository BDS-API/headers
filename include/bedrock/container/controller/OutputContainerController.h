#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class OutputContainerController : ContainerController {

public:
    OutputContainerController::~OutputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    OutputContainerController(std::shared_ptr<ContainerModel>, bool);
};
