#pragma once

#include "ExpressionNode.h"
#include <string>
#include "../bedrock/util/BlockPos.h"
#include "../json/Value.h"
#include "RenderParams.h"
#include <functional>
#include <vector>
#include "../bedrock/util/Random.h"


class ScatterParams {

public:
    class ChanceInformation;
    class CoordinateRange;
    class ScatteredPositions;

    void _shouldScatter(RenderParams &, Random &)const;
//  void _parseDistribution(Json::Value const&, ScatterParams::RandomDistributionType &); //TODO: incomplete function definition
    ScatterParams();
    void scatter(RenderParams &, BlockPos const&, Random &)const;
    ~ScatterParams();
    void initMolangParams(RenderParams &, BlockPos const&, Random &);
    ScatterParams(ScatterParams const&);
    void _parseExtents(Json::Value const&, ExpressionNode &, ExpressionNode &, std::function<std::function const* (RenderParams &, std::vector<float> const&)> (std::string const&, bool));
    void _getPos(unsigned int, BlockPos const&, Random &, RenderParams &)const;
    void _parseCoordinate(Json::Value const&, ScatterParams::CoordinateRange &, std::function<std::function const* (RenderParams &, std::vector<float> const&)> (std::string const&, bool));
    class ChanceInformation {

    public:
        ChanceInformation(ScatterParams::ChanceInformation const&);
        ChanceInformation();
        ~ChanceInformation();
    };
    class CoordinateRange {

    public:
        CoordinateRange(ScatterParams::CoordinateRange const&);
        ~CoordinateRange();
        CoordinateRange();
        void eval(unsigned int &, Random &, RenderParams &)const;
    };
    class ScatteredPositions {

    public:
        void size();
        ScatteredPositions(ScatterParams const&, RenderParams &, Random &);
        void nextPos();
        void empty();
    };
};
