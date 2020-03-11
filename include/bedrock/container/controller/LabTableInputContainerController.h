#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class LabTableInputContainerController : ContainerController {

public:
    virtual ~LabTableInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
