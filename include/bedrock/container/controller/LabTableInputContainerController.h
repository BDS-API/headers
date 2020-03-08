#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class LabTableInputContainerController : ContainerController {

public:
    LabTableInputContainerController::~LabTableInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
