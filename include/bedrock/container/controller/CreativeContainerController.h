#pragma once

#include "../../../unmapped/Recipes"
#include "../model/ContainerModel"


class CreativeContainerController : ContainerController {

public:
    virtual CreativeContainerController::~CreativeContainerController();
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;

    CreativeContainerController(std::shared_ptr<ContainerModel>);
};
