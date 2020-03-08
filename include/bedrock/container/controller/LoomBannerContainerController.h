#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class LoomBannerContainerController : ContainerController {

public:
    LoomBannerContainerController::~LoomBannerContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomBannerContainerController(std::shared_ptr<ContainerModel>);
};
