#pragma once

class MaterialReducerOutputContainerController : ContainerController {

public:
    virtual ~MaterialReducerOutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void MaterialReducerOutputContainerController(std::shared_ptr<ContainerModel>);
};
