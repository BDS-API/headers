#pragma once

#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class LoomMaterialContainerController : ContainerController {

public:
    virtual LoomMaterialContainerController::~LoomMaterialContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
