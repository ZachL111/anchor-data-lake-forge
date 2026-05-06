#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{46, 25, 8, 48};
    assert(domain_review_score(item) == 141);
    assert(domain_review_lane(item) == "ship");
}
