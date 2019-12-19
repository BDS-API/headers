#pragma once

class CompoundCreatorInputContainerController : ContainerController {

public:
    virtual CompoundCreatorInputContainerController::~CompoundCreatorInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
