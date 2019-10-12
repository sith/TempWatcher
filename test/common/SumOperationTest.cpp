//
// Created by Oleksandra Baukh on 10/12/19.
//

#include <unity.h>
#include <common/SumOperation.h>

SumOperation sumOperation;

void test_sum(void) {
    TEST_ASSERT_EQUAL(32, sumOperation.sum(100, 3));
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    UNITY_END();

    return 0;
}



