#pragma once

class OutputContainerController : ContainerController {

public:
    virtual ~OutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void OutputContainerController(std::shared_ptr<ContainerModel>, bool);
};
