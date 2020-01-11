#pragma once

class LabTableInputContainerController : ContainerController {

public:
    virtual LabTableInputContainerController::~LabTableInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    LabTableInputContainerController(std::shared_ptr<ContainerModel>);
};
