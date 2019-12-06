#pragma once

class LoomBannerContainerController : ContainerController {

public:
    virtual ~LoomBannerContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void LoomBannerContainerController(std::shared_ptr<ContainerModel>);
};
