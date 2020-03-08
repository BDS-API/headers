#pragma once



class StackedGraphBars {

public:

    StackedGraphBars(std::string const&, std::vector<StackedGraphBars::ColorKey, std::allocator<StackedGraphBars::ColorKey>> const&, int);
    void setHeight(float);
    void addBar(std::array<float, 2ul> const&);
    void getColors()const;
    void getData()const;
    void getHeight()const;
    void getMaxBars()const;
};
