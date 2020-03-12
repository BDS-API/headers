#pragma once

#include <memory>
#include "ContainerController.h"


class LoomMaterialContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~LoomMaterialContainerController();
    LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
