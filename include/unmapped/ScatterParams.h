#pragma once

#include <functional>


class ScatterParams {

public:
    class ChanceInformation;
    class CoordinateRange;
    class ScatteredPositions;

    void _getPos(unsigned int, BlockPos const&, Random &, RenderParams &)const;
    void _parseCoordinate(Json::Value const&, ScatterParams::CoordinateRange &, std::function<std::function const* (RenderParams &, std::vector<float> const&)> (std::string const&, bool));
    ScatterParams();
    void _parseExtents(Json::Value const&, ExpressionNode &, ExpressionNode &, std::function<std::function const* (RenderParams &, std::vector<float> const&)> (std::string const&, bool));
    ~ScatterParams();
    void initMolangParams(RenderParams &, BlockPos const&, Random &);
    void _shouldScatter(RenderParams &, Random &)const;
    ScatterParams(ScatterParams const&);
    void scatter(RenderParams &, BlockPos const&, Random &)const;
//  void _parseDistribution(Json::Value const&, ScatterParams::RandomDistributionType &); //TODO: incomplete function definition
    class ChanceInformation {

    public:
        ChanceInformation(ScatterParams::ChanceInformation const&);
        ~ChanceInformation();
        ChanceInformation();
    };
    class CoordinateRange {

    public:
        ~CoordinateRange();
        void eval(unsigned int &, Random &, RenderParams &)const;
        CoordinateRange(ScatterParams::CoordinateRange const&);
        CoordinateRange();
    };
    class ScatteredPositions {

    public:
        void size();
        void empty();
        ScatteredPositions(ScatterParams const&, RenderParams &, Random &);
        void nextPos();
    };
};
