#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class LoomBannerContainerController : ContainerController {

public:
    virtual LoomBannerContainerController::~LoomBannerContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomBannerContainerController(std::shared_ptr<ContainerModel>);
};
