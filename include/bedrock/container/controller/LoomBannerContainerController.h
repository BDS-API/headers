#pragma once

#include <memory>
#include "ContainerController.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class LoomBannerContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~LoomBannerContainerController();
    LoomBannerContainerController(std::shared_ptr<ContainerModel>);
};
