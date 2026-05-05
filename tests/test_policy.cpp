#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{91, 93, 21, 6, 9};
    assert(score_signal(signal_case_1) == 185);
    assert(classify_signal(signal_case_1) == "accept");
    Signal signal_case_2{83, 70, 17, 7, 4};
    assert(score_signal(signal_case_2) == 148);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{84, 92, 19, 12, 4};
    assert(score_signal(signal_case_3) == 144);
    assert(classify_signal(signal_case_3) == "review");
}
