#pragma once

#include <memory>
#include "ContainerController.h"


class LabTableInputContainerController : ContainerController {

public:
    ~LabTableInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
