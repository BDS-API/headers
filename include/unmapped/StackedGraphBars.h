#pragma once

#include <array>
#include <memory>
#include "./ColorKey.h"
#include <vector>
#include <string>


class StackedGraphBars {

public:

    ~StackedGraphBars();
    StackedGraphBars(std::string const&, std::vector<StackedGraphBars::ColorKey, std::allocator<StackedGraphBars::ColorKey>> const&, int);
    void setHeight(float);
//  void addBar(std::array<float, 2ul> const&); //TODO: incomplete function definition
    void getColors()const;
    void getData()const;
    void getHeight()const;
    std::string getGraphName()const;
    void getMaxBars()const;
};
