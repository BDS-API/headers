#pragma once

class StackedGraphBars {

public:

    void StackedGraphBars(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<StackedGraphBars::ColorKey, std::allocator<StackedGraphBars::ColorKey>> const&, int);
    void setHeight(float);
    void addBar(std::array<float, 2ul> const&);
    void getColors(void)const;
    void getData(void)const;
    void getHeight(void)const;
    void getMaxBars(void)const;
};
