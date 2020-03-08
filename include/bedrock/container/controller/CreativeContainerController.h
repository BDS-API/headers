#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../../unmapped/Recipes"


class CreativeContainerController : ContainerController {

public:
    CreativeContainerController::~CreativeContainerController()
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;

    CreativeContainerController(std::shared_ptr<ContainerModel>);
};
