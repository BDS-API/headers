#pragma once

class FurnaceResultContainerController : ContainerController {

public:
    virtual FurnaceResultContainerController::~FurnaceResultContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    FurnaceResultContainerController(std::shared_ptr<ContainerModel>);
};
