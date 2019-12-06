#pragma once

class CompoundCreatorInputContainerController : ContainerController {

public:
    virtual ~CompoundCreatorInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void CompoundCreatorInputContainerController(std::shared_ptr<ContainerModel>);
};
