#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class LabTableInputContainerController : ContainerController {

public:
    virtual LabTableInputContainerController::~LabTableInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
