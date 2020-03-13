#pragma once

#include <functional>


class ScatterParams {

public:
    class ChanceInformation;
    class CoordinateRange;
    class ScatteredPositions;

    ~ScatterParams(); // _ZN13ScatterParamsD2Ev
    ScatterParams(); // _ZN13ScatterParamsC2Ev
    ScatterParams(ScatterParams const&); // _ZN13ScatterParamsC2ERKS_
    void _getPos(unsigned int, BlockPos const&, Random &, RenderParams &)const; // _ZNK13ScatterParams7_getPosEjRK8BlockPosR6RandomR12RenderParams
    void initMolangParams(RenderParams &, BlockPos const&, Random &); // _ZN13ScatterParams16initMolangParamsER12RenderParamsRK8BlockPosR6Random
    void scatter(RenderParams &, BlockPos const&, Random &)const; // _ZNK13ScatterParams7scatterER12RenderParamsRK8BlockPosR6Random
    void _shouldScatter(RenderParams &, Random &)const; // _ZNK13ScatterParams14_shouldScatterER12RenderParamsR6Random
    void _parseCoordinate(Json::Value const&, ScatterParams::CoordinateRange &, std::function<std::function const* (RenderParams &, std::vector<float> const&)> (std::string const&, bool)); // _ZN13ScatterParams16_parseCoordinateERKN4Json5ValueERNS_15CoordinateRangeESt8functionIFPKS6_IFfR12RenderParamsRKSt6vectorIfSaIfEEEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbEE
    void _parseExtents(Json::Value const&, ExpressionNode &, ExpressionNode &, std::function<std::function const* (RenderParams &, std::vector<float> const&)> (std::string const&, bool)); // _ZN13ScatterParams13_parseExtentsERKN4Json5ValueER14ExpressionNodeS5_St8functionIFPKS6_IFfR12RenderParamsRKSt6vectorIfSaIfEEEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbEE
//  void _parseDistribution(Json::Value const&, ScatterParams::RandomDistributionType &); //TODO: incomplete function definition // _ZN13ScatterParams18_parseDistributionERKN4Json5ValueERNS_22RandomDistributionTypeE
    class ChanceInformation {

    public:
        ~ChanceInformation(); // _ZN13ScatterParams17ChanceInformationD2Ev
        ChanceInformation(); // _ZN13ScatterParams17ChanceInformationC2Ev
        ChanceInformation(ScatterParams::ChanceInformation const&); // _ZN13ScatterParams17ChanceInformationC2ERKS0_
    };
    class CoordinateRange {

    public:
        ~CoordinateRange(); // _ZN13ScatterParams15CoordinateRangeD2Ev
        CoordinateRange(); // _ZN13ScatterParams15CoordinateRangeC2Ev
        CoordinateRange(ScatterParams::CoordinateRange const&); // _ZN13ScatterParams15CoordinateRangeC2ERKS0_
        void eval(unsigned int &, Random &, RenderParams &)const; // _ZNK13ScatterParams15CoordinateRange4evalERjR6RandomR12RenderParams
    };
    class ScatteredPositions {

    public:
        ScatteredPositions(ScatterParams const&, RenderParams &, Random &); // _ZN13ScatterParams18ScatteredPositionsC2ERKS_R12RenderParamsR6Random
        void nextPos(); // _ZN13ScatterParams18ScatteredPositions7nextPosEv
        void size(); // _ZN13ScatterParams18ScatteredPositions4sizeEv
        void empty(); // _ZN13ScatterParams18ScatteredPositions5emptyEv
    };
};
