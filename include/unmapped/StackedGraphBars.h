#pragma once

#include <string>
#include <array>
#include <vector>


class StackedGraphBars {

public:
    class ColorKey;

    ~StackedGraphBars(); // _ZN16StackedGraphBarsD2Ev
    StackedGraphBars(std::string const&, std::vector<StackedGraphBars::ColorKey> const&, int); // _ZN16StackedGraphBarsC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorINS_8ColorKeyESaIS9_EEi
    void setHeight(float); // _ZN16StackedGraphBars9setHeightEf
    void addBar(std::array<float, 2ul> const&); // _ZN16StackedGraphBars6addBarERKSt5arrayIfLm2EE
    void getColors()const; // _ZNK16StackedGraphBars9getColorsEv
    void getData()const; // _ZNK16StackedGraphBars7getDataEv
    void getHeight()const; // _ZNK16StackedGraphBars9getHeightEv
    std::string getGraphName()const; // _ZNK16StackedGraphBars12getGraphNameB5cxx11Ev
    void getMaxBars()const; // _ZNK16StackedGraphBars10getMaxBarsEv
    class ColorKey {

    public:
        ~ColorKey(); // _ZN16StackedGraphBars8ColorKeyD2Ev
        ColorKey(StackedGraphBars::ColorKey const&); // _ZN16StackedGraphBars8ColorKeyC2ERKS0_
    };
};
