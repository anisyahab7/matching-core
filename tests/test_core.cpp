#include "matching-core/engine.h"

#include <iostream>

#define CHECK(cond)                                                          \
    do {                                                                     \
        if (!(cond)) {                                                       \
            std::cerr << "fail: " #cond "\n";                                \
            return 1;                                                        \
        }                                                                    \
    } while (0)

int main() {
    CHECK(matchcore::ticker(1) > 0);
    CHECK(!matchcore::allow(50, 100, 0.1));
    CHECK(matchcore::allow(10, 100, 0.5));
    auto r = matchcore::backtest(16);
    CHECK(r.bars == 16);
    CHECK(r.equity > 0);
    std::cout << "ok\n";
    return 0;
}
