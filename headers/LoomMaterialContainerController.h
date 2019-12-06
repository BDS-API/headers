#pragma once

class LoomMaterialContainerController : ContainerController {

public:
    virtual ~LoomMaterialContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
