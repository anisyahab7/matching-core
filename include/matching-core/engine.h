#pragma once

#include <cstdint>

namespace matchcore {

struct Report {
    double equity;
    std::uint32_t fills;
    std::uint32_t bars;
};

double ticker(std::uint32_t i);
bool allow(double notional, double equity, double max_pos);
Report backtest(std::uint32_t bars);

}  // namespace matchcore
