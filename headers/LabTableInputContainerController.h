#pragma once

class LabTableInputContainerController : ContainerController {

public:
    virtual ~LabTableInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
