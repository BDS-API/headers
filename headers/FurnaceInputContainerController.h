#pragma once

class FurnaceInputContainerController : ContainerController {

public:
    virtual ~FurnaceInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;

    void FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
