#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class LabTableInputContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~LabTableInputContainerController();
    LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
