#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../../unmapped/HashString"
#include "../../../unmapped/Recipes"
#include "../../item/ItemInstance"


class FurnaceInputContainerController : ContainerController {

public:
    FurnaceInputContainerController::~FurnaceInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;

    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
