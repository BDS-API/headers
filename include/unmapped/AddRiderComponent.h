#pragma once



class AddRiderComponent {

public:
    AddRiderComponent(AddRiderComponent &&);
    void reloadComponent(Actor &);
    ~AddRiderComponent();
    AddRiderComponent();
};
