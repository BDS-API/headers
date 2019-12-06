#pragma once

class FurnaceResultContainerController : ContainerController {

public:
    virtual ~FurnaceResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void FurnaceResultContainerController(std::shared_ptr<ContainerModel>);
};
