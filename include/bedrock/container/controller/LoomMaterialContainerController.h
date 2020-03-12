#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class LoomMaterialContainerController : ContainerController {

public:
    ~LoomMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
