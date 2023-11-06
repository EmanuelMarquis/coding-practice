#include <CUnit/CUnitCI.h>

static void simple_test(void) {
    CU_ASSERT_FATAL(1 == 1);
}

CUNIT_CI_RUN("my-suite", CUNIT_CI_TEST(simple_test));