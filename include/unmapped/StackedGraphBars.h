#pragma once

#include <string>
#include <vector>
#include <array>


class StackedGraphBars {

public:
    class ColorKey;

    ~StackedGraphBars();
    void getData()const;
    void getColors()const;
    std::string getGraphName()const;
    StackedGraphBars(std::string const&, std::vector<StackedGraphBars::ColorKey> const&, int);
//  void addBar(std::array<float, 2ul> const&); //TODO: incomplete function definition
    void getHeight()const;
    void getMaxBars()const;
    void setHeight(float);
    class ColorKey {

    public:
        ColorKey(StackedGraphBars::ColorKey const&);
        ~ColorKey();
    };
};
