//
// Created by Oleksandra Baukh on 10/11/19.
//

#include <unity.h>

void test_read_temperature(void) {
    TEST_ASSERT_EQUAL(10, 10);
}


int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_read_temperature);
    UNITY_END();

    return 0;
}
