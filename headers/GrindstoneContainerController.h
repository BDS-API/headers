#pragma once

class GrindstoneContainerController : ContainerController {

public:
    virtual ~GrindstoneContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void GrindstoneContainerController(std::shared_ptr<ContainerModel>);
};
