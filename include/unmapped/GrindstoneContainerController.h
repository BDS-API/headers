#pragma once

class GrindstoneContainerController : ContainerController {

public:
    virtual GrindstoneContainerController::~GrindstoneContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    GrindstoneContainerController(std::shared_ptr<ContainerModel>);
};
