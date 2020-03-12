#pragma once

#include <memory>
#include "ContainerController.h"


class LoomBannerContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~LoomBannerContainerController();
    LoomBannerContainerController(std::shared_ptr<ContainerModel>);
};
