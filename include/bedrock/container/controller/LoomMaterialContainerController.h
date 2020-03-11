#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class LoomMaterialContainerController : ContainerController {

public:
    virtual ~LoomMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
