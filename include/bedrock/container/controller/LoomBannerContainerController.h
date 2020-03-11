#pragma once

#include "../../item/ItemInstance.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class LoomBannerContainerController : ContainerController {

public:
    virtual ~LoomBannerContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomBannerContainerController(std::shared_ptr<ContainerModel>);
};
