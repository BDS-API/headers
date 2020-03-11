#pragma once

#include "../../../unmapped/Recipes.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../../unmapped/HashString.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "./ContainerController.h"


class FurnaceInputContainerController : ContainerController {

public:
    virtual ~FurnaceInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;

    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
