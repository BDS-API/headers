#pragma once

class PlayerUIContainerModel : PlayerUIContainerModelBase {

public:
    virtual ~PlayerUIContainerModel();
    virtual void _getContainerOffset(void)const;

    void PlayerUIContainerModel(ContainerEnumName, Player &);
    void _getContainerSize(ContainerEnumName);
    void _getContainerCategory(ContainerEnumName);
};
