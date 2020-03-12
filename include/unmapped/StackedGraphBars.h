#pragma once

#include <string>
#include <array>
#include <vector>


class StackedGraphBars {

public:
    class ColorKey;

    void getMaxBars()const;
    void getHeight()const;
    void setHeight(float);
    ~StackedGraphBars();
    void addBar(std::array<float, 2ul> const&);
    std::string getGraphName()const;
    void getData()const;
    void getColors()const;
    StackedGraphBars(std::string const&, std::vector<StackedGraphBars::ColorKey> const&, int);
    class ColorKey {

    public:
        ColorKey(StackedGraphBars::ColorKey const&);
        ~ColorKey();
    };
};
