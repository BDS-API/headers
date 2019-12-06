#pragma once

class CreativeContainerController : ContainerController {

public:
    virtual ~CreativeContainerController();
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;

    void CreativeContainerController(std::shared_ptr<ContainerModel>);
};
